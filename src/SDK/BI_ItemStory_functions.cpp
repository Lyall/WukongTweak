#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_ItemStory

#include "Basic.hpp"

#include "BI_ItemStory_classes.hpp"
#include "BI_ItemStory_parameters.hpp"


namespace SDK
{

// Function BI_ItemStory.BI_ItemStory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBI_ItemStory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimHide_Play
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimHide_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimHide_Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimHide_Stop
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimHide_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimHide_Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimObsFold_Play
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimObsFold_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimObsFold_Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimObsFold_Stop
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimObsFold_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimObsFold_Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimObsUnfold_Play
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimObsUnfold_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimObsUnfold_Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimObsUnfold_Stop
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimObsUnfold_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimObsUnfold_Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimShow_Play
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimShow_Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimShow_Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.EventAnimShow_Stop
// (BlueprintCallable, BlueprintEvent)

void UBI_ItemStory_C::EventAnimShow_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "EventAnimShow_Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_ItemStory.BI_ItemStory_C.ExecuteUbergraph_BI_ItemStory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_ItemStory_C::ExecuteUbergraph_BI_ItemStory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "ExecuteUbergraph_BI_ItemStory");

	Params::BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_ItemStory.BI_ItemStory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_ItemStory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_ItemStory_C", "PreConstruct");

	Params::BI_ItemStory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
