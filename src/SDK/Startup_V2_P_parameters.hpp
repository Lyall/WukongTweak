#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Startup_V2_P

#include "Basic.hpp"

#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function Startup_V2_P.Startup_V2_P_C.InpActEvt_Ctrl+Alt+Shift_K_K2Node_InputKeyEvent_0
// 0x0018 (0x0018 - 0x0000)
struct Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0");
static_assert(sizeof(Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0");
static_assert(offsetof(Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'Startup_V2_P_C_InpActEvt_CtrlPlusAltPlusShift_K_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

// Function Startup_V2_P.Startup_V2_P_C.ExecuteUbergraph_Startup_V2_P
// 0x0020 (0x0020 - 0x0000)
struct Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_InputKeyEvent_Key;                          // 0x0008(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P) == 0x000008, "Wrong alignment on Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P");
static_assert(sizeof(Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P) == 0x000020, "Wrong size on Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P");
static_assert(offsetof(Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P, EntryPoint) == 0x000000, "Member 'Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P::EntryPoint' has a wrong offset!");
static_assert(offsetof(Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P, K2Node_InputKeyEvent_Key) == 0x000008, "Member 'Startup_V2_P_C_ExecuteUbergraph_Startup_V2_P::K2Node_InputKeyEvent_Key' has a wrong offset!");

}

