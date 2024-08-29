#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Abp_InteractiveActor

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Abp_InteractiveActor.Abp_InteractiveActor_C.AnimBlueprintGeneratedConstantData
// 0x0107 (0x0108 - 0x0001)
struct Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NameProperty_10;                                   // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BoolProperty_11;                                   // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloatProperty_12;                                  // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          StructProperty_13;                                 // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         FloatProperty_14;                                  // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BoolProperty_15;                                   // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               EnumProperty_16;                                   // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                ByteProperty_17;                                   // 0x0046(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NameProperty_18;                                   // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   StructProperty_19;                                 // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
};
static_assert(alignof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData) == 0x000108, "Wrong size on Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, NameProperty_10) == 0x000004, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::NameProperty_10' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, BoolProperty_11) == 0x00000C, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::BoolProperty_11' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, FloatProperty_12) == 0x000010, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::FloatProperty_12' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, StructProperty_13) == 0x000014, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::StructProperty_13' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, FloatProperty_14) == 0x000040, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::FloatProperty_14' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, BoolProperty_15) == 0x000044, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::BoolProperty_15' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, EnumProperty_16) == 0x000045, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::EnumProperty_16' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, ByteProperty_17) == 0x000046, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::ByteProperty_17' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, NameProperty_18) == 0x000048, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::NameProperty_18' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, StructProperty_19) == 0x000050, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::StructProperty_19' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct Abp_InteractiveActor.Abp_InteractiveActor_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      AnimSequenceBase;                                  // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData, AnimSequenceBase) == 0x000008, "Member 'Abp_InteractiveActor::FAnimBlueprintGeneratedMutableData::AnimSequenceBase' has a wrong offset!");

}

