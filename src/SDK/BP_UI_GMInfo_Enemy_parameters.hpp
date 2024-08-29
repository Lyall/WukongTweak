#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_GMInfo_Enemy

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_UI_GMInfo_Enemy.BP_UI_GMInfo_Enemy_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct BP_UI_GMInfo_Enemy_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_GMInfo_Enemy_C_Tick) == 0x000008, "Wrong alignment on BP_UI_GMInfo_Enemy_C_Tick");
static_assert(sizeof(BP_UI_GMInfo_Enemy_C_Tick) == 0x000048, "Wrong size on BP_UI_GMInfo_Enemy_C_Tick");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_Tick, MyGeometry) == 0x000000, "Member 'BP_UI_GMInfo_Enemy_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_Tick, InDeltaTime) == 0x000040, "Member 'BP_UI_GMInfo_Enemy_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_UI_GMInfo_Enemy.BP_UI_GMInfo_Enemy_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_UI_GMInfo_Enemy_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_GMInfo_Enemy_C_PreConstruct) == 0x000001, "Wrong alignment on BP_UI_GMInfo_Enemy_C_PreConstruct");
static_assert(sizeof(BP_UI_GMInfo_Enemy_C_PreConstruct) == 0x000001, "Wrong size on BP_UI_GMInfo_Enemy_C_PreConstruct");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_UI_GMInfo_Enemy_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_UI_GMInfo_Enemy.BP_UI_GMInfo_Enemy_C.ExecuteUbergraph_BP_UI_GMInfo_Enemy
// 0x0050 (0x0050 - 0x0000)
struct BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy) == 0x000008, "Wrong alignment on BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy");
static_assert(sizeof(BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy) == 0x000050, "Wrong size on BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy, EntryPoint) == 0x000000, "Member 'BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy, K2Node_Event_MyGeometry) == 0x000008, "Member 'BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy, K2Node_Event_InDeltaTime) == 0x000048, "Member 'BP_UI_GMInfo_Enemy_C_ExecuteUbergraph_BP_UI_GMInfo_Enemy::K2Node_Event_InDeltaTime' has a wrong offset!");

}

