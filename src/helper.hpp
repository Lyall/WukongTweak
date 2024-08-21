#include "stdafx.h"
#include "ConsoleVariable.h"

namespace Memory
{
    template<typename T>
    void Write(uintptr_t writeAddress, T value)
    {
        DWORD oldProtect;
        VirtualProtect((LPVOID)(writeAddress), sizeof(T), PAGE_EXECUTE_WRITECOPY, &oldProtect);
        *(reinterpret_cast<T*>(writeAddress)) = value;
        VirtualProtect((LPVOID)(writeAddress), sizeof(T), oldProtect, &oldProtect);
    }

    void PatchBytes(uintptr_t address, const char* pattern, unsigned int numBytes)
    {
        DWORD oldProtect;
        VirtualProtect((LPVOID)address, numBytes, PAGE_EXECUTE_READWRITE, &oldProtect);
        memcpy((LPVOID)address, pattern, numBytes);
        VirtualProtect((LPVOID)address, numBytes, oldProtect, &oldProtect);
    }

    // CSGOSimple's pattern scan
    // https://github.com/OneshotGH/CSGOSimple-master/blob/master/CSGOSimple/helpers/utils.cpp
    std::uint8_t* PatternScan(void* module, const char* signature)
    {
        static auto pattern_to_byte = [](const char* pattern) {
            auto bytes = std::vector<int>{};
            auto start = const_cast<char*>(pattern);
            auto end = const_cast<char*>(pattern) + strlen(pattern);

            for (auto current = start; current < end; ++current) {
                if (*current == '?') {
                    ++current;
                    if (*current == '?')
                        ++current;
                    bytes.push_back(-1);
                }
                else {
                    bytes.push_back(strtoul(current, &current, 16));
                }
            }
            return bytes;
            };

        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);

        auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
        auto patternBytes = pattern_to_byte(signature);
        auto scanBytes = reinterpret_cast<std::uint8_t*>(module);

        auto s = patternBytes.size();
        auto d = patternBytes.data();

        for (auto i = 0ul; i < sizeOfImage - s; ++i) {
            bool found = true;
            for (auto j = 0ul; j < s; ++j) {
                if (scanBytes[i + j] != d[j] && d[j] != -1) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return &scanBytes[i];
            }
        }
        return nullptr;
    }

    static HMODULE GetThisDllHandle()
    {
        MEMORY_BASIC_INFORMATION info;
        size_t len = VirtualQueryEx(GetCurrentProcess(), (void*)GetThisDllHandle, &info, sizeof(info));
        assert(len == sizeof(info));
        return len ? (HMODULE)info.AllocationBase : NULL;
    }

    uint32_t ModuleTimestamp(void* module)
    {
        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);
        return ntHeaders->FileHeader.TimeDateStamp;
    }

    uintptr_t GetAbsolute(uintptr_t address) noexcept
    {
        return (address + 4 + *reinterpret_cast<std::int32_t*>(address));
    }
}

namespace Util
{
    std::pair<int, int> GetPhysicalDesktopDimensions() {
        if (DEVMODE devMode{ .dmSize = sizeof(DEVMODE) }; EnumDisplaySettings(nullptr, ENUM_CURRENT_SETTINGS, &devMode))
            return { devMode.dmPelsWidth, devMode.dmPelsHeight };

        return {};
    }

    int HexStringToInt(const std::string& hexString) {
        int num;
        std::stringstream ss;
        ss << std::hex << hexString;
        ss >> num;
        return num;
    }

    std::string WideStringToUTF8(const std::wstring& wideString)
    {
        if (wideString.empty()) return std::string();

        int sizeNeeded = WideCharToMultiByte(CP_UTF8, 0, &wideString[0], (int)wideString.size(), NULL, 0, NULL, NULL);
        std::string utf8String(sizeNeeded, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wideString[0], (int)wideString.size(), &utf8String[0], sizeNeeded, NULL, NULL);
        return utf8String;
    }

    std::string ConvertToUTF8(const UC::FString& FString)
    {
        return WideStringToUTF8(FString.ToWString());
    }
}

namespace Unreal
{
    struct FConsoleObject
    {
        void* Vft;
        UC::FString Description;
    };

    UC::TMap<UC::FString, FConsoleObject*> GetConsoleObjects(uintptr_t singletonAddr)
    {
        if (singletonAddr == 0)
        {
            return UC::TMap<UC::FString, FConsoleObject*>();
        }

       UC::uint8** Singleton = reinterpret_cast<UC::uint8**>(singletonAddr);

        if (Singleton == nullptr || *Singleton == nullptr)
        {
            return UC::TMap<UC::FString, FConsoleObject*>();
        }

        return *reinterpret_cast<UC::TMap<UC::FString, FConsoleObject*>*>(*Singleton + 8);
    }

    IConsoleVariable* FindCVAR(std::string CVAR, UC::TMap<UC::FString, FConsoleObject*> ConsoleObjects)
    {
        if (CVAR.empty() || ConsoleObjects.Num() == 0)
        {
            return nullptr;
        }

        for (const auto& Pair : ConsoleObjects)
        {
            if (Pair.Value() == nullptr)
            {
                continue;
            }

            if (Pair.Key().ToString() == CVAR)
            {
                return reinterpret_cast<IConsoleVariable*>(Pair.Value());
            }
        }

        return nullptr;
    }

    struct UObject
    {
        // TODO
    };

    struct UClass
    {
        // TODO
    };

    struct UConsole
    {
        // TODO
    };

    struct UGameViewportClient
    {
        char Unk00[0x40];
        UConsole* ViewportConsole;
    };

    struct UEngine500
    {
        char unknown1[0xF0];
        UClass* ConsoleClass; // 0xF8
        char unknown2[0x6E8]; 
        UGameViewportClient* GameViewport; // 0x7E8
    };

    typedef UObject* (__fastcall* fStaticConstructObject_Internal)
        (
            UClass* Class,
            UObject* InOuter,
            void* Name,
            int SetFlags,
            unsigned int InternalSetFlags,
            UObject* Template,
            bool  bCopyTransientsFromClassDefaults,
            void* InstanceGraph,
            bool  bAssumeTemplateIsArchetype
            );
    static fStaticConstructObject_Internal StaticConstructObject_Internal;

    static UConsole* ConstructConsole(UClass* ConsoleClass, UObject* outer)
    {
        return reinterpret_cast<UConsole*>(StaticConstructObject_Internal(ConsoleClass, outer, nullptr, 0, 0, nullptr, false, nullptr, false));
    }
}