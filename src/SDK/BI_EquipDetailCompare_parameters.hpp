#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_EquipDetailCompare

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_EquipDetailCompare.BI_EquipDetailCompare_C.ExecuteUbergraph_BI_EquipDetailCompare
// 0x0028 (0x0028 - 0x0000)
struct BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName_1;                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_EventName;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare) == 0x000008, "Wrong alignment on BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare");
static_assert(sizeof(BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare) == 0x000028, "Wrong size on BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare");
static_assert(offsetof(BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare, EntryPoint) == 0x000000, "Member 'BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare::EntryPoint' has a wrong offset!");
static_assert(offsetof(BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare, K2Node_CustomEvent_EventName_1) == 0x000008, "Member 'BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare::K2Node_CustomEvent_EventName_1' has a wrong offset!");
static_assert(offsetof(BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare, K2Node_CustomEvent_EventName) == 0x000018, "Member 'BI_EquipDetailCompare_C_ExecuteUbergraph_BI_EquipDetailCompare::K2Node_CustomEvent_EventName' has a wrong offset!");

// Function BI_EquipDetailCompare.BI_EquipDetailCompare_C.AnimBuildCheckNotCompareEvent
// 0x0010 (0x0010 - 0x0000)
struct BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent) == 0x000008, "Wrong alignment on BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent");
static_assert(sizeof(BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent) == 0x000010, "Wrong size on BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent");
static_assert(offsetof(BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent, EventName) == 0x000000, "Member 'BI_EquipDetailCompare_C_AnimBuildCheckNotCompareEvent::EventName' has a wrong offset!");

// Function BI_EquipDetailCompare.BI_EquipDetailCompare_C.AnimBuildCheckIsCompareEvent
// 0x0010 (0x0010 - 0x0000)
struct BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent) == 0x000008, "Wrong alignment on BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent");
static_assert(sizeof(BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent) == 0x000010, "Wrong size on BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent");
static_assert(offsetof(BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent, EventName) == 0x000000, "Member 'BI_EquipDetailCompare_C_AnimBuildCheckIsCompareEvent::EventName' has a wrong offset!");

}

