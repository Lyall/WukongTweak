#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropItem_BaiYiSpear

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GSE_Fire_RTQuene_structs.hpp"


namespace SDK::Params
{

// Function BP_DropItem_BaiYiSpear.BP_DropItem_BaiYiSpear_C.DropItemBPFunc
// 0x0004 (0x0004 - 0x0000)
struct BP_DropItem_BaiYiSpear_C_DropItemBPFunc final
{
public:
	float                                         FloatParam;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DropItem_BaiYiSpear_C_DropItemBPFunc) == 0x000004, "Wrong alignment on BP_DropItem_BaiYiSpear_C_DropItemBPFunc");
static_assert(sizeof(BP_DropItem_BaiYiSpear_C_DropItemBPFunc) == 0x000004, "Wrong size on BP_DropItem_BaiYiSpear_C_DropItemBPFunc");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_DropItemBPFunc, FloatParam) == 0x000000, "Member 'BP_DropItem_BaiYiSpear_C_DropItemBPFunc::FloatParam' has a wrong offset!");

// Function BP_DropItem_BaiYiSpear.BP_DropItem_BaiYiSpear_C.ExecuteUbergraph_BP_DropItem_BaiYiSpear
// 0x00F0 (0x00F0 - 0x0000)
struct BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGSE_Fire_RTQuene                      K2Node_MakeStruct_GSE_Fire_RTQuene;                // 0x0050(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGSE_Fire_RTQuene                      K2Node_MakeStruct_GSE_Fire_RTQuene_1;              // 0x0070(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0090(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x00A0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGSE_FireSystem_C*                      K2Node_DynamicCast_AsGSE_Fire_System;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGSE_FireSystem_C*                      K2Node_DynamicCast_AsGSE_Fire_System_1;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E6[0x2];                                       // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_FloatParam;                           // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear) == 0x000008, "Wrong alignment on BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear");
static_assert(sizeof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear) == 0x0000F0, "Wrong size on BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, EntryPoint) == 0x000000, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000038, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_MakeStruct_GSE_Fire_RTQuene) == 0x000050, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_MakeStruct_GSE_Fire_RTQuene' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_MakeStruct_GSE_Fire_RTQuene_1) == 0x000070, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_MakeStruct_GSE_Fire_RTQuene_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000090, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x0000A0, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_DynamicCast_AsGSE_Fire_System) == 0x0000C0, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_DynamicCast_AsGSE_Fire_System' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_DynamicCast_AsGSE_Fire_System_1) == 0x0000D0, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_DynamicCast_AsGSE_Fire_System_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Array_Length_ReturnValue) == 0x0000DC, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E5, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear, K2Node_Event_FloatParam) == 0x0000E8, "Member 'BP_DropItem_BaiYiSpear_C_ExecuteUbergraph_BP_DropItem_BaiYiSpear::K2Node_Event_FloatParam' has a wrong offset!");

// Function BP_DropItem_BaiYiSpear.BP_DropItem_BaiYiSpear_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_DropItem_BaiYiSpear_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DropItem_BaiYiSpear_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_DropItem_BaiYiSpear_C_ReceiveTick");
static_assert(sizeof(BP_DropItem_BaiYiSpear_C_ReceiveTick) == 0x000004, "Wrong size on BP_DropItem_BaiYiSpear_C_ReceiveTick");
static_assert(offsetof(BP_DropItem_BaiYiSpear_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_DropItem_BaiYiSpear_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

