#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpacityMicroMap

#include "Basic.hpp"

#include "OpacityMicroMap_classes.hpp"
#include "OpacityMicroMap_parameters.hpp"


namespace SDK
{

// Function OpacityMicroMap.OMMBlueprintLibrary.BuildAllStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOMMBlueprintLibrary::BuildAllStaticMesh(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OMMBlueprintLibrary", "BuildAllStaticMesh");

	Params::OMMBlueprintLibrary_BuildAllStaticMesh Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OpacityMicroMap.OMMBlueprintLibrary.CalculateCurrentWorldOMMTotalDataSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UOMMBlueprintLibrary::CalculateCurrentWorldOMMTotalDataSize(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OMMBlueprintLibrary", "CalculateCurrentWorldOMMTotalDataSize");

	Params::OMMBlueprintLibrary_CalculateCurrentWorldOMMTotalDataSize Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OpacityMicroMap.OMMBlueprintLibrary.IsThisDeviceSupportOMM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOMMBlueprintLibrary::IsThisDeviceSupportOMM(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OMMBlueprintLibrary", "IsThisDeviceSupportOMM");

	Params::OMMBlueprintLibrary_IsThisDeviceSupportOMM Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function OpacityMicroMap.OMMBlueprintLibrary.RemoveOMMUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                      StaticMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOMMBlueprintLibrary::RemoveOMMUserData(class UStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OMMBlueprintLibrary", "RemoveOMMUserData");

	Params::OMMBlueprintLibrary_RemoveOMMUserData Parms{};

	Parms.StaticMesh = StaticMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
