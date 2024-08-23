#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_CostItemKey

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "b1MinusManaged_classes.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_CostItemKey.BI_CostItemKey_C
// 0x0038 (0x04F0 - 0x04B8)
class UBI_CostItemKey_C final : public UBUI_Button
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GSAKBStateAnim;                                    // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGSFocusWidget*                         FocusWidget;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSImage*                               ImgBar;                                            // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgItem;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCost;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtOwn;                                            // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BI_CostItemKey(int32 EntryPoint);
	void InitTxt(class UTextBlock* TxtObj, const struct FAnchors& TxtAnchors, const struct FVector2D& TxtAlignment, const struct FVector2D& TxtPos, const struct FSlateColor& TxtColor, const struct FSlateFontInfo& TxtFont, const struct FVector2D& TxtShadowOffset, const struct FLinearColor& TxtShadowColor, ETextJustify TxtJustification);
	void InitUI(class UImage* Obj, const struct FSlateBrush& Brush, const struct FVector2D& Size, const struct FVector2D& Pos);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_CostItemKey_C">();
	}
	static class UBI_CostItemKey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_CostItemKey_C>();
	}
};
static_assert(alignof(UBI_CostItemKey_C) == 0x000008, "Wrong alignment on UBI_CostItemKey_C");
static_assert(sizeof(UBI_CostItemKey_C) == 0x0004F0, "Wrong size on UBI_CostItemKey_C");
static_assert(offsetof(UBI_CostItemKey_C, UberGraphFrame) == 0x0004B8, "Member 'UBI_CostItemKey_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBI_CostItemKey_C, GSAKBStateAnim) == 0x0004C0, "Member 'UBI_CostItemKey_C::GSAKBStateAnim' has a wrong offset!");
static_assert(offsetof(UBI_CostItemKey_C, FocusWidget) == 0x0004C8, "Member 'UBI_CostItemKey_C::FocusWidget' has a wrong offset!");
static_assert(offsetof(UBI_CostItemKey_C, ImgBar) == 0x0004D0, "Member 'UBI_CostItemKey_C::ImgBar' has a wrong offset!");
static_assert(offsetof(UBI_CostItemKey_C, ImgItem) == 0x0004D8, "Member 'UBI_CostItemKey_C::ImgItem' has a wrong offset!");
static_assert(offsetof(UBI_CostItemKey_C, TxtCost) == 0x0004E0, "Member 'UBI_CostItemKey_C::TxtCost' has a wrong offset!");
static_assert(offsetof(UBI_CostItemKey_C, TxtOwn) == 0x0004E8, "Member 'UBI_CostItemKey_C::TxtOwn' has a wrong offset!");

}
