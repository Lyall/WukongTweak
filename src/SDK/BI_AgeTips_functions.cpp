#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AgeTips

#include "Basic.hpp"

#include "BI_AgeTips_classes.hpp"
#include "BI_AgeTips_parameters.hpp"


namespace SDK
{

// Function BI_AgeTips.BI_AgeTips_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_AgeTips_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AgeTips_C", "PreConstruct");

	Params::BI_AgeTips_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_AgeTips.BI_AgeTips_C.ExecuteUbergraph_BI_AgeTips
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_AgeTips_C::ExecuteUbergraph_BI_AgeTips(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AgeTips_C", "ExecuteUbergraph_BI_AgeTips");

	Params::BI_AgeTips_C_ExecuteUbergraph_BI_AgeTips Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

