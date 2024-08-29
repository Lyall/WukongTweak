#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Abp_ModularMeshCS

#include "Basic.hpp"

#include "Abp_ModularMeshCS_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Abp_ModularMeshCS.Abp_ModularMeshCS_C
// 0x0E80 (0x1200 - 0x0380)
class UAbp_ModularMeshCS_C : public UBUAnimModularMesh
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Abp_ModularMeshCS::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0388(0x0028)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03B0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03B8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03C0(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03E0(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x05B8(0x0048)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0600(0x0990)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0F90(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0FB0(0x0020)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0FD0(0x00C8)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x1098(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x10E0(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1120(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1160(0x0040)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x11A0(0x0040)()
	class UAnimSequence*                          AS_loop_stand;                                     // 0x11E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_loop_walk;                                      // 0x11E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_loop_run;                                       // 0x11F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          AS_loop_rush;                                      // 0x11F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Abp_ModularMeshCS_AnimGraphNode_BlendListByInt_F7773D644DAE5AFB3079CD9FB471C6EC();
	void ExecuteUbergraph_Abp_ModularMeshCS(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Abp_ModularMeshCS_C">();
	}
	static class UAbp_ModularMeshCS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbp_ModularMeshCS_C>();
	}
};
static_assert(alignof(UAbp_ModularMeshCS_C) == 0x000010, "Wrong alignment on UAbp_ModularMeshCS_C");
static_assert(sizeof(UAbp_ModularMeshCS_C) == 0x001200, "Wrong size on UAbp_ModularMeshCS_C");
static_assert(offsetof(UAbp_ModularMeshCS_C, UberGraphFrame) == 0x000380, "Member 'UAbp_ModularMeshCS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, __AnimBlueprintMutables) == 0x000388, "Member 'UAbp_ModularMeshCS_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimBlueprintExtension_PropertyAccess) == 0x0003B0, "Member 'UAbp_ModularMeshCS_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimBlueprintExtension_Base) == 0x0003B8, "Member 'UAbp_ModularMeshCS_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_Root) == 0x0003C0, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_CopyPoseFromMesh) == 0x0003E0, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_BlendListByBool) == 0x0005B8, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_RigidBody) == 0x000600, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_LocalToComponentSpace) == 0x000F90, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_ComponentToLocalSpace) == 0x000FB0, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_ApplyAdditive) == 0x000FD0, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_BlendListByInt) == 0x001098, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_SequencePlayer_3) == 0x0010E0, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_SequencePlayer_2) == 0x001120, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_SequencePlayer_1) == 0x001160, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AnimGraphNode_SequencePlayer) == 0x0011A0, "Member 'UAbp_ModularMeshCS_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AS_loop_stand) == 0x0011E0, "Member 'UAbp_ModularMeshCS_C::AS_loop_stand' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AS_loop_walk) == 0x0011E8, "Member 'UAbp_ModularMeshCS_C::AS_loop_walk' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AS_loop_run) == 0x0011F0, "Member 'UAbp_ModularMeshCS_C::AS_loop_run' has a wrong offset!");
static_assert(offsetof(UAbp_ModularMeshCS_C, AS_loop_rush) == 0x0011F8, "Member 'UAbp_ModularMeshCS_C::AS_loop_rush' has a wrong offset!");

}

