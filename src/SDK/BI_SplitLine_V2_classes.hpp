#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_SplitLine_V2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_SplitLine_V2.BI_SplitLine_V2_C
// 0x00F8 (0x04D0 - 0x03D8)
class UBI_SplitLine_V2_C final : public UBUI_Widget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImgLine;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Img;                                               // 0x03F0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                              Size;                                              // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BI_SplitLine_V2(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_SplitLine_V2_C">();
	}
	static class UBI_SplitLine_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_SplitLine_V2_C>();
	}
};
static_assert(alignof(UBI_SplitLine_V2_C) == 0x000010, "Wrong alignment on UBI_SplitLine_V2_C");
static_assert(sizeof(UBI_SplitLine_V2_C) == 0x0004D0, "Wrong size on UBI_SplitLine_V2_C");
static_assert(offsetof(UBI_SplitLine_V2_C, UberGraphFrame) == 0x0003D8, "Member 'UBI_SplitLine_V2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBI_SplitLine_V2_C, ImgLine) == 0x0003E0, "Member 'UBI_SplitLine_V2_C::ImgLine' has a wrong offset!");
static_assert(offsetof(UBI_SplitLine_V2_C, Img) == 0x0003F0, "Member 'UBI_SplitLine_V2_C::Img' has a wrong offset!");
static_assert(offsetof(UBI_SplitLine_V2_C, Size) == 0x0004C0, "Member 'UBI_SplitLine_V2_C::Size' has a wrong offset!");

}
