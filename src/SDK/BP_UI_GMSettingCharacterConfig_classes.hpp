#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_GMSettingCharacterConfig

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_GMSettingCharacterConfig.BP_UI_GMSettingCharacterConfig_C
// 0x0008 (0x03E0 - 0x03D8)
class UBP_UI_GMSettingCharacterConfig_C final : public UBUI_Widget
{
public:
	class UButton*                                ConfirmBtn;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_GMSettingCharacterConfig_C">();
	}
	static class UBP_UI_GMSettingCharacterConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_GMSettingCharacterConfig_C>();
	}
};
static_assert(alignof(UBP_UI_GMSettingCharacterConfig_C) == 0x000008, "Wrong alignment on UBP_UI_GMSettingCharacterConfig_C");
static_assert(sizeof(UBP_UI_GMSettingCharacterConfig_C) == 0x0003E0, "Wrong size on UBP_UI_GMSettingCharacterConfig_C");
static_assert(offsetof(UBP_UI_GMSettingCharacterConfig_C, ConfirmBtn) == 0x0003D8, "Member 'UBP_UI_GMSettingCharacterConfig_C::ConfirmBtn' has a wrong offset!");

}

