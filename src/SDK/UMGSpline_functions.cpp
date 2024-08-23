#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMGSpline

#include "Basic.hpp"

#include "UMGSpline_classes.hpp"
#include "UMGSpline_parameters.hpp"


namespace SDK
{

// Function UMGSpline.SplineWidget.AddSplinePoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUMGSplinePoint                  SplinePoint                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bUpdateSpline                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::AddSplinePoint(const struct FUMGSplinePoint& SplinePoint, bool bUpdateSpline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "AddSplinePoint");

	Params::SplineWidget_AddSplinePoint Parms{};

	Parms.SplinePoint = std::move(SplinePoint);
	Parms.bUpdateSpline = bUpdateSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.AddSplinePointAtIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUMGSplinePoint                  SplinePoint                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bUpdateSpline                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::AddSplinePointAtIndex(const struct FUMGSplinePoint& SplinePoint, int32 Index_0, bool bUpdateSpline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "AddSplinePointAtIndex");

	Params::SplineWidget_AddSplinePointAtIndex Parms{};

	Parms.SplinePoint = std::move(SplinePoint);
	Parms.Index_0 = Index_0;
	Parms.bUpdateSpline = bUpdateSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.ChangeSplinePointAtIndex
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUMGSplinePoint                  SplinePoint                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bUpdateSpline                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::ChangeSplinePointAtIndex(const struct FUMGSplinePoint& SplinePoint, int32 Index_0, bool bUpdateSpline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "ChangeSplinePointAtIndex");

	Params::SplineWidget_ChangeSplinePointAtIndex Parms{};

	Parms.SplinePoint = std::move(SplinePoint);
	Parms.Index_0 = Index_0;
	Parms.bUpdateSpline = bUpdateSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.GetSplineDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* USplineWidget::GetSplineDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetSplineDynamicMaterial");

	Params::SplineWidget_GetSplineDynamicMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.RemoveAllSplinePoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bUpdateSpline                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::RemoveAllSplinePoint(bool bUpdateSpline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "RemoveAllSplinePoint");

	Params::SplineWidget_RemoveAllSplinePoint Parms{};

	Parms.bUpdateSpline = bUpdateSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.RemoveSplinePoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bUpdateSpline                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::RemoveSplinePoint(int32 Index_0, bool bUpdateSpline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "RemoveSplinePoint");

	Params::SplineWidget_RemoveSplinePoint Parms{};

	Parms.Index_0 = Index_0;
	Parms.bUpdateSpline = bUpdateSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.SetSplineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*               Material                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::SetSplineMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "SetSplineMaterial");

	Params::SplineWidget_SetSplineMaterial Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.SetSplineThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Thickness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::SetSplineThickness(float Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "SetSplineThickness");

	Params::SplineWidget_SetSplineThickness Parms{};

	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.SetSplineType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUMGSplineType                          Type                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USplineWidget::SetSplineType(EUMGSplineType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "SetSplineType");

	Params::SplineWidget_SetSplineType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.UpdateSpline
// (Native, Public, BlueprintCallable)

void USplineWidget::UpdateSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "UpdateSpline");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UMGSpline.SplineWidget.GetDirectionAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetDirectionAtDistanceAlongSpline(float Distance, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetDirectionAtDistanceAlongSpline");

	Params::SplineWidget_GetDirectionAtDistanceAlongSpline Parms{};

	Parms.Distance = Distance;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetDirectionAtSplineInputKey
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetDirectionAtSplineInputKey(float InKey, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetDirectionAtSplineInputKey");

	Params::SplineWidget_GetDirectionAtSplineInputKey Parms{};

	Parms.InKey = InKey;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetDirectionAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   PointIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetDirectionAtSplinePoint(int32 PointIndex, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetDirectionAtSplinePoint");

	Params::SplineWidget_GetDirectionAtSplinePoint Parms{};

	Parms.PointIndex = PointIndex;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetDistanceAlongSplineAtSplineInputKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USplineWidget::GetDistanceAlongSplineAtSplineInputKey(float InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetDistanceAlongSplineAtSplineInputKey");

	Params::SplineWidget_GetDistanceAlongSplineAtSplineInputKey Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetInputKeyAtDistanceAlongSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USplineWidget::GetInputKeyAtDistanceAlongSpline(float Distance, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetInputKeyAtDistanceAlongSpline");

	Params::SplineWidget_GetInputKeyAtDistanceAlongSpline Parms{};

	Parms.Distance = Distance;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetLocationAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetLocationAtDistanceAlongSpline(float Distance, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetLocationAtDistanceAlongSpline");

	Params::SplineWidget_GetLocationAtDistanceAlongSpline Parms{};

	Parms.Distance = Distance;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetLocationAtSplineInputKey
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetLocationAtSplineInputKey(float InKey, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetLocationAtSplineInputKey");

	Params::SplineWidget_GetLocationAtSplineInputKey Parms{};

	Parms.InKey = InKey;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetLocationAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   PointIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetLocationAtSplinePoint(int32 PointIndex, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetLocationAtSplinePoint");

	Params::SplineWidget_GetLocationAtSplinePoint Parms{};

	Parms.PointIndex = PointIndex;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetNumberOfSplinePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USplineWidget::GetNumberOfSplinePoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetNumberOfSplinePoints");

	Params::SplineWidget_GetNumberOfSplinePoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetRotationAngleAtDistanceAlongSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USplineWidget::GetRotationAngleAtDistanceAlongSpline(float Distance, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetRotationAngleAtDistanceAlongSpline");

	Params::SplineWidget_GetRotationAngleAtDistanceAlongSpline Parms{};

	Parms.Distance = Distance;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetRotationAngleAtSplineInputKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USplineWidget::GetRotationAngleAtSplineInputKey(float InKey, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetRotationAngleAtSplineInputKey");

	Params::SplineWidget_GetRotationAngleAtSplineInputKey Parms{};

	Parms.InKey = InKey;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetSplineLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USplineWidget::GetSplineLength() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetSplineLength");

	Params::SplineWidget_GetSplineLength Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetSplineMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* USplineWidget::GetSplineMaterial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetSplineMaterial");

	Params::SplineWidget_GetSplineMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetSplineThickness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USplineWidget::GetSplineThickness() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetSplineThickness");

	Params::SplineWidget_GetSplineThickness Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetSplineType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EUMGSplineType                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUMGSplineType USplineWidget::GetSplineType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetSplineType");

	Params::SplineWidget_GetSplineType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetTangentAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   Distance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetTangentAtDistanceAlongSpline(float Distance, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetTangentAtDistanceAlongSpline");

	Params::SplineWidget_GetTangentAtDistanceAlongSpline Parms{};

	Parms.Distance = Distance;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetTangentAtSplineInputKey
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetTangentAtSplineInputKey(float InKey, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetTangentAtSplineInputKey");

	Params::SplineWidget_GetTangentAtSplineInputKey Parms{};

	Parms.InKey = InKey;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UMGSpline.SplineWidget.GetTangentAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   PointIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUMGSplineCoordinateSpace               CoordinateSpace                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USplineWidget::GetTangentAtSplinePoint(int32 PointIndex, EUMGSplineCoordinateSpace CoordinateSpace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineWidget", "GetTangentAtSplinePoint");

	Params::SplineWidget_GetTangentAtSplinePoint Parms{};

	Parms.PointIndex = PointIndex;
	Parms.CoordinateSpace = CoordinateSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
