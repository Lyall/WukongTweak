#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BUI_RoleMain

#include "Basic.hpp"

#include "BUI_RoleMain_classes.hpp"
#include "BUI_RoleMain_parameters.hpp"


namespace SDK
{

// Function BUI_RoleMain.BUI_RoleMain_C.ExecuteUbergraph_BUI_RoleMain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBUI_RoleMain_C::ExecuteUbergraph_BUI_RoleMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUI_RoleMain_C", "ExecuteUbergraph_BUI_RoleMain");

	Params::BUI_RoleMain_C_ExecuteUbergraph_BUI_RoleMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BUI_RoleMain.BUI_RoleMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBUI_RoleMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BUI_RoleMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

