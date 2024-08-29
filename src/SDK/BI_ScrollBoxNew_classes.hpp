#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_ScrollBoxNew

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_ScrollBoxNew.BI_ScrollBoxNew_C
// 0x0018 (0x0448 - 0x0430)
class UBI_ScrollBoxNew_C final : public b1MinusManaged::UGSScrollBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GSAnimUpdate;                                      // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             Child;                                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BI_ScrollBoxNew(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_ScrollBoxNew_C">();
	}
	static class UBI_ScrollBoxNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_ScrollBoxNew_C>();
	}
};
static_assert(alignof(UBI_ScrollBoxNew_C) == 0x000008, "Wrong alignment on UBI_ScrollBoxNew_C");
static_assert(sizeof(UBI_ScrollBoxNew_C) == 0x000448, "Wrong size on UBI_ScrollBoxNew_C");
static_assert(offsetof(UBI_ScrollBoxNew_C, UberGraphFrame) == 0x000430, "Member 'UBI_ScrollBoxNew_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBI_ScrollBoxNew_C, GSAnimUpdate) == 0x000438, "Member 'UBI_ScrollBoxNew_C::GSAnimUpdate' has a wrong offset!");
static_assert(offsetof(UBI_ScrollBoxNew_C, Child) == 0x000440, "Member 'UBI_ScrollBoxNew_C::Child' has a wrong offset!");

}

