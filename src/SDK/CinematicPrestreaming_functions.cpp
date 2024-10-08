#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicPrestreaming

#include "Basic.hpp"

#include "CinematicPrestreaming_classes.hpp"
#include "CinematicPrestreaming_parameters.hpp"


namespace SDK
{

// Function CinematicPrestreaming.MovieSceneCinePrestreamingSection.SetPrestreamingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCinePrestreamingData*            InData                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinePrestreamingSection::SetPrestreamingAsset(const class UCinePrestreamingData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinePrestreamingSection", "SetPrestreamingAsset");

	Params::MovieSceneCinePrestreamingSection_SetPrestreamingAsset Parms{};

	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CinematicPrestreaming.MovieSceneCinePrestreamingSection.SetQualityLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InLevel                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinePrestreamingSection::SetQualityLevel(const int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinePrestreamingSection", "SetQualityLevel");

	Params::MovieSceneCinePrestreamingSection_SetQualityLevel Parms{};

	Parms.InLevel = InLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CinematicPrestreaming.MovieSceneCinePrestreamingSection.SetStartFrameOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InOffset                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCinePrestreamingSection::SetStartFrameOffset(const int32 InOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinePrestreamingSection", "SetStartFrameOffset");

	Params::MovieSceneCinePrestreamingSection_SetStartFrameOffset Parms{};

	Parms.InOffset = InOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CinematicPrestreaming.MovieSceneCinePrestreamingSection.GetPrestreamingAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UCinePrestreamingData>ReturnValue                                            (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UCinePrestreamingData> UMovieSceneCinePrestreamingSection::GetPrestreamingAsset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinePrestreamingSection", "GetPrestreamingAsset");

	Params::MovieSceneCinePrestreamingSection_GetPrestreamingAsset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CinematicPrestreaming.MovieSceneCinePrestreamingSection.GetQualityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneCinePrestreamingSection::GetQualityLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinePrestreamingSection", "GetQualityLevel");

	Params::MovieSceneCinePrestreamingSection_GetQualityLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

