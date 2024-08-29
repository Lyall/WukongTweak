#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_QuickItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_QuickItem.BI_QuickItem_C
// 0x00A8 (0x0608 - 0x0560)
class UBI_QuickItem_C final : public UBUI_ButtonNone
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0560(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimConfig;                                        // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAKBColorTypeAnim;                                // 0x0570(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus; // 0x0578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimLockActived;                                 // 0x0580(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimLockFocused;                                 // 0x0588(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimLockHovered;                                 // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimLockNormal;                                  // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimDisable;                                     // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimActived;                                     // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimFocused;                                     // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimHovered;                                     // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimNormal;                                      // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus; // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAnimPressed;                                     // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GSAKBStateAnim;                                    // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGSFocusWidget*                         FocusWidget;                                       // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHitArea;                                        // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSImage*                               ImgItem;                                           // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSImage*                               MarkerBase;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UINS_Config;                                       // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTBI_QuickItem_1(class UNiagaraSystemWidget* UINS_Config_0);
	void SequenceEvent__ENTRYPOINTBI_QuickItem_0(class UNiagaraSystemWidget* UINS_Config_0);
	void SeqFX_StopConfig(class UNiagaraSystemWidget* UINS_Config_0);
	void SeqFX_PlayConfig(class UNiagaraSystemWidget* UINS_Config_0);
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_BI_QuickItem(int32 EntryPoint);
	void Construct();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_QuickItem_C">();
	}
	static class UBI_QuickItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_QuickItem_C>();
	}
};
static_assert(alignof(UBI_QuickItem_C) == 0x000008, "Wrong alignment on UBI_QuickItem_C");
static_assert(sizeof(UBI_QuickItem_C) == 0x000608, "Wrong size on UBI_QuickItem_C");
static_assert(offsetof(UBI_QuickItem_C, UberGraphFrame) == 0x000560, "Member 'UBI_QuickItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, AnimConfig) == 0x000568, "Member 'UBI_QuickItem_C::AnimConfig' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAKBColorTypeAnim) == 0x000570, "Member 'UBI_QuickItem_C::GSAKBColorTypeAnim' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus) == 0x000578, "Member 'UBI_QuickItem_C::MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimLockActived) == 0x000580, "Member 'UBI_QuickItem_C::GSAnimLockActived' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimLockFocused) == 0x000588, "Member 'UBI_QuickItem_C::GSAnimLockFocused' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimLockHovered) == 0x000590, "Member 'UBI_QuickItem_C::GSAnimLockHovered' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimLockNormal) == 0x000598, "Member 'UBI_QuickItem_C::GSAnimLockNormal' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimDisable) == 0x0005A0, "Member 'UBI_QuickItem_C::GSAnimDisable' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimActived) == 0x0005A8, "Member 'UBI_QuickItem_C::GSAnimActived' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimFocused) == 0x0005B0, "Member 'UBI_QuickItem_C::GSAnimFocused' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimHovered) == 0x0005B8, "Member 'UBI_QuickItem_C::GSAnimHovered' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimNormal) == 0x0005C0, "Member 'UBI_QuickItem_C::GSAnimNormal' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus) == 0x0005C8, "Member 'UBI_QuickItem_C::MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAnimPressed) == 0x0005D0, "Member 'UBI_QuickItem_C::GSAnimPressed' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, GSAKBStateAnim) == 0x0005D8, "Member 'UBI_QuickItem_C::GSAKBStateAnim' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, FocusWidget) == 0x0005E0, "Member 'UBI_QuickItem_C::FocusWidget' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, ImgHitArea) == 0x0005E8, "Member 'UBI_QuickItem_C::ImgHitArea' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, ImgItem) == 0x0005F0, "Member 'UBI_QuickItem_C::ImgItem' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, MarkerBase) == 0x0005F8, "Member 'UBI_QuickItem_C::MarkerBase' has a wrong offset!");
static_assert(offsetof(UBI_QuickItem_C, UINS_Config) == 0x000600, "Member 'UBI_QuickItem_C::UINS_Config' has a wrong offset!");

}

