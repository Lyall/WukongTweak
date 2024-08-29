#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_BattleEnd_Action

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_BattleEnd_Action.BI_BattleEnd_Action_C
// 0x0028 (0x04E0 - 0x04B8)
class UBI_BattleEnd_Action_C final : public UBUI_Button
{
public:
	class UWidgetAnimation*                       GSAnimPressed;                                     // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAKBStateAnim;                                    // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgBar;                                            // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgLine;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_BattleEnd_Action_C">();
	}
	static class UBI_BattleEnd_Action_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_BattleEnd_Action_C>();
	}
};
static_assert(alignof(UBI_BattleEnd_Action_C) == 0x000008, "Wrong alignment on UBI_BattleEnd_Action_C");
static_assert(sizeof(UBI_BattleEnd_Action_C) == 0x0004E0, "Wrong size on UBI_BattleEnd_Action_C");
static_assert(offsetof(UBI_BattleEnd_Action_C, GSAnimPressed) == 0x0004B8, "Member 'UBI_BattleEnd_Action_C::GSAnimPressed' has a wrong offset!");
static_assert(offsetof(UBI_BattleEnd_Action_C, GSAKBStateAnim) == 0x0004C0, "Member 'UBI_BattleEnd_Action_C::GSAKBStateAnim' has a wrong offset!");
static_assert(offsetof(UBI_BattleEnd_Action_C, ImgBar) == 0x0004C8, "Member 'UBI_BattleEnd_Action_C::ImgBar' has a wrong offset!");
static_assert(offsetof(UBI_BattleEnd_Action_C, ImgLine) == 0x0004D0, "Member 'UBI_BattleEnd_Action_C::ImgLine' has a wrong offset!");
static_assert(offsetof(UBI_BattleEnd_Action_C, TxtName) == 0x0004D8, "Member 'UBI_BattleEnd_Action_C::TxtName' has a wrong offset!");

}

