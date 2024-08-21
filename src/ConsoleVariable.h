#include "stdafx.h"
#include "UnrealContainers.hpp"

using namespace UC;

enum EConsoleVariableFlags
{
	ECVF_FlagMask = 0x0000ffff,
	ECVF_Default = 0x0,
	ECVF_Cheat = 0x1,
	ECVF_ReadOnly = 0x4,
	ECVF_Unregistered = 0x8,
	ECVF_CreatedFromIni = 0x10,
	ECVF_RenderThreadSafe = 0x20,
	ECVF_Scalability = 0x40,
	ECVF_ScalabilityGroup = 0x80,
	ECVF_SetFlagMask = 0x00ff0000,
	ECVF_Set_NoSinkCall_Unsafe = 0x00010000,
	ECVF_SetByMask = 0xff000000,
	ECVF_SetByConstructor = 0x00000000,
	ECVF_SetByScalability = 0x01000000,
	ECVF_SetByGameSetting = 0x02000000,
	ECVF_SetByProjectSetting = 0x03000000,
	ECVF_SetBySystemSettingsIni = 0x04000000,
	ECVF_SetByDeviceProfile = 0x05000000,
	ECVF_SetByConsoleVariablesIni = 0x06000000,
	ECVF_SetByCommandline = 0x07000000,
	ECVF_SetByCode = 0x08000000,
	ECVF_SetByConsole = 0x09000000,
};

template <class T>
class TConsoleVariableData
{
public:
	T GetValueOnGameThread() const
	{
		return ShadowedValue[0];
	}

	T GetValueOnRenderThread() const
	{
		return ShadowedValue[1];
	}

	void Set(T value) {
		ShadowedValue[0] = ShadowedValue[1] = value;
	}

	T ShadowedValue[2];
};

class IConsoleVariable;
class IConsoleObject
{

public:
	virtual ~IConsoleObject() {}

	virtual const TCHAR* GetHelp() const = 0;
	virtual void SetHelp(const TCHAR* Value) = 0;
	virtual EConsoleVariableFlags GetFlags() const = 0;
	virtual void SetFlags(const EConsoleVariableFlags Value) = 0;

	void ClearFlags(const EConsoleVariableFlags Value)
	{
		uint32 New = (uint32)GetFlags() & ~(uint32)Value;

		SetFlags((EConsoleVariableFlags)New);
	}
	bool TestFlags(const EConsoleVariableFlags Value) const
	{
		return ((uint32)GetFlags() & (uint32)Value) != 0;
	}
	virtual class IConsoleVariable* AsVariable()
	{
		return 0;
	}

	virtual bool IsVariableBool() const { return false; }
	virtual bool IsVariableInt() const { return false; }
	virtual bool IsVariableFloat() const { return false; }
	virtual bool IsVariableString() const { return false; }

	virtual class TConsoleVariableData<bool>* AsVariableBool()
	{
		return 0;
	}

	virtual class TConsoleVariableData<int32>* AsVariableInt()
	{
		return 0;
	}

	virtual class TConsoleVariableData<float>* AsVariableFloat()
	{
		return 0;
	}

	virtual class TConsoleVariableData<FString>* AsVariableString()
	{
		return 0;
	}

	virtual struct IConsoleCommand* AsCommand()
	{
		return 0;
	}

private:

	virtual void Release() = 0;

	friend class FConsoleManager;
};

class FConsoleVariableDelegate {};

class IConsoleVariable : public IConsoleObject
{
public:

	virtual void Set(const TCHAR* InValue, EConsoleVariableFlags SetBy = ECVF_SetByCode) = 0;
	virtual bool GetBool() const = 0;
	virtual int32 GetInt() const = 0;
	virtual float GetFloat() const = 0;
	virtual FString GetString() const = 0;
	virtual void SetOnChangedCallback(const FConsoleVariableDelegate& Callback) = 0;
	void Set(bool InValue, EConsoleVariableFlags SetBy = ECVF_SetByCode)
	{
		Set(InValue ? TEXT("1") : TEXT("0"), SetBy);
	}
	void Set(int32 InValue, EConsoleVariableFlags SetBy = ECVF_SetByCode)
	{
		return;
	}
	void Set(float InValue, EConsoleVariableFlags SetBy = ECVF_SetByCode)
	{
		return;
	}

	void SetWithCurrentPriority(bool InValue)
	{
		EConsoleVariableFlags CurFlags = (EConsoleVariableFlags)(GetFlags() & ECVF_SetByMask);
		Set(InValue, CurFlags);
	}
	void SetWithCurrentPriority(int32 InValue)
	{
		EConsoleVariableFlags CurFlags = (EConsoleVariableFlags)(GetFlags() & ECVF_SetByMask);
		Set(InValue, CurFlags);
	}
	void SetWithCurrentPriority(float InValue)
	{
		EConsoleVariableFlags CurFlags = (EConsoleVariableFlags)(GetFlags() & ECVF_SetByMask);
		Set(InValue, CurFlags);
	}
	void SetWithCurrentPriority(const TCHAR* InValue)
	{
		EConsoleVariableFlags CurFlags = (EConsoleVariableFlags)(GetFlags() & ECVF_SetByMask);
		Set(InValue, CurFlags);
	}
};