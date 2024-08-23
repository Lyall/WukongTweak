#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSEngineExtent

#include "Basic.hpp"

#include "CinematicCamera_classes.hpp"
#include "GSEngineExtent_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GSEngineExtent.AnimNotify_PlayDummyEfx
// 0x0028 (0x0060 - 0x0038)
class UAnimNotify_PlayDummyEfx final : public UAnimNotify
{
public:
	TSubclassOf<class AActor>                     DummyActorClass;                                   // 0x0038(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimNotify_DummyEfx>           DummyEfxs;                                         // 0x0040(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                          AnimSeq;                                           // 0x0050(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxLifetime;                                       // 0x0058(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_PlayDummyEfx">();
	}
	static class UAnimNotify_PlayDummyEfx* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayDummyEfx>();
	}
};
static_assert(alignof(UAnimNotify_PlayDummyEfx) == 0x000008, "Wrong alignment on UAnimNotify_PlayDummyEfx");
static_assert(sizeof(UAnimNotify_PlayDummyEfx) == 0x000060, "Wrong size on UAnimNotify_PlayDummyEfx");
static_assert(offsetof(UAnimNotify_PlayDummyEfx, DummyActorClass) == 0x000038, "Member 'UAnimNotify_PlayDummyEfx::DummyActorClass' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayDummyEfx, DummyEfxs) == 0x000040, "Member 'UAnimNotify_PlayDummyEfx::DummyEfxs' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayDummyEfx, AnimSeq) == 0x000050, "Member 'UAnimNotify_PlayDummyEfx::AnimSeq' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayDummyEfx, MaxLifetime) == 0x000058, "Member 'UAnimNotify_PlayDummyEfx::MaxLifetime' has a wrong offset!");

// Class GSEngineExtent.GSEDestructibleMeshGenComponent
// 0x01F8 (0x02A8 - 0x00B0)
class UGSEDestructibleMeshGenComponent final : public UActorComponent
{
public:
	class UBlueprint*                             TargetBlueprint;                                   // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FolderPath;                                        // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDestructibleComponent*>         DestructibleComponentArray;                        // 0x00C8(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                           BoneNameArray;                                     // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                          bUseCustomCollisionToDefault;                      // 0x00E8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRefreshPriviewObjectsOnAnimalMesh;                // 0x00E9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBodyInstance                          BodyInstance;                                      // 0x00F0(0x0190)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCurveFloat*                            FloatCurve;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParamName;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             FloatCurveTick;                                    // 0x0290(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A0[0x8];                                      // 0x02A0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CallFloatCurve();
	bool SetAllCollisionEnabledForce(ECollisionEnabled NewType);
	bool SetAllCollisionObjectType(ECollisionChannel Channel);
	bool SetAllCollisionResponseToAllChannels(ECollisionResponse NewResponse);
	bool SetAllCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse);
	bool SetCollisionEnabledForce(ECollisionEnabled NewType, class UDestructibleComponent* Comp);
	bool SetCollisionEnabledForceByName(ECollisionEnabled NewType, const class FString& Name_0);
	bool SetCollisionObjectType(ECollisionChannel Channel, class UDestructibleComponent* Comp);
	bool SetCollisionObjectTypeByName(ECollisionChannel Channel, const class FString& Name_0);
	bool SetCollisionResponseToAllChannels(ECollisionResponse NewResponse, class UDestructibleComponent* Comp);
	bool SetCollisionResponseToAllChannelsByName(ECollisionResponse NewResponse, const class FString& Name_0);
	bool SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse, class UDestructibleComponent* Comp);
	bool SetCollisionResponseToChannelByName(ECollisionChannel Channel, ECollisionResponse NewResponse, const class FString& Name_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSEDestructibleMeshGenComponent">();
	}
	static class UGSEDestructibleMeshGenComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSEDestructibleMeshGenComponent>();
	}
};
static_assert(alignof(UGSEDestructibleMeshGenComponent) == 0x000008, "Wrong alignment on UGSEDestructibleMeshGenComponent");
static_assert(sizeof(UGSEDestructibleMeshGenComponent) == 0x0002A8, "Wrong size on UGSEDestructibleMeshGenComponent");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, TargetBlueprint) == 0x0000B0, "Member 'UGSEDestructibleMeshGenComponent::TargetBlueprint' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, FolderPath) == 0x0000B8, "Member 'UGSEDestructibleMeshGenComponent::FolderPath' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, DestructibleComponentArray) == 0x0000C8, "Member 'UGSEDestructibleMeshGenComponent::DestructibleComponentArray' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, BoneNameArray) == 0x0000D8, "Member 'UGSEDestructibleMeshGenComponent::BoneNameArray' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, bUseCustomCollisionToDefault) == 0x0000E8, "Member 'UGSEDestructibleMeshGenComponent::bUseCustomCollisionToDefault' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, bRefreshPriviewObjectsOnAnimalMesh) == 0x0000E9, "Member 'UGSEDestructibleMeshGenComponent::bRefreshPriviewObjectsOnAnimalMesh' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, BodyInstance) == 0x0000F0, "Member 'UGSEDestructibleMeshGenComponent::BodyInstance' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, FloatCurve) == 0x000280, "Member 'UGSEDestructibleMeshGenComponent::FloatCurve' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, ParamName) == 0x000288, "Member 'UGSEDestructibleMeshGenComponent::ParamName' has a wrong offset!");
static_assert(offsetof(UGSEDestructibleMeshGenComponent, FloatCurveTick) == 0x000290, "Member 'UGSEDestructibleMeshGenComponent::FloatCurveTick' has a wrong offset!");

// Class GSEngineExtent.EditorFuncLibCommon
// 0x0000 (0x0028 - 0x0028)
class UEditorFuncLibCommon final : public UBlueprintFunctionLibrary
{
public:
	static int32 UMGTemplate_GetLearnID(int32 UnitID, int32 LearnID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditorFuncLibCommon">();
	}
	static class UEditorFuncLibCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditorFuncLibCommon>();
	}
};
static_assert(alignof(UEditorFuncLibCommon) == 0x000008, "Wrong alignment on UEditorFuncLibCommon");
static_assert(sizeof(UEditorFuncLibCommon) == 0x000028, "Wrong size on UEditorFuncLibCommon");

// Class GSEngineExtent.GSDPICustomScalingRuleInCPP
// 0x0000 (0x0028 - 0x0028)
class UGSDPICustomScalingRuleInCPP final : public UDPICustomScalingRule
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSDPICustomScalingRuleInCPP">();
	}
	static class UGSDPICustomScalingRuleInCPP* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSDPICustomScalingRuleInCPP>();
	}
};
static_assert(alignof(UGSDPICustomScalingRuleInCPP) == 0x000008, "Wrong alignment on UGSDPICustomScalingRuleInCPP");
static_assert(sizeof(UGSDPICustomScalingRuleInCPP) == 0x000028, "Wrong size on UGSDPICustomScalingRuleInCPP");

// Class GSEngineExtent.GSEActorComponent
// 0x0000 (0x00B0 - 0x00B0)
class UGSEActorComponent final : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSEActorComponent">();
	}
	static class UGSEActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSEActorComponent>();
	}
};
static_assert(alignof(UGSEActorComponent) == 0x000008, "Wrong alignment on UGSEActorComponent");
static_assert(sizeof(UGSEActorComponent) == 0x0000B0, "Wrong size on UGSEActorComponent");

// Class GSEngineExtent.GSEBlastMeshActor
// 0x0000 (0x0278 - 0x0278)
class AGSEBlastMeshActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSEBlastMeshActor">();
	}
	static class AGSEBlastMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGSEBlastMeshActor>();
	}
};
static_assert(alignof(AGSEBlastMeshActor) == 0x000008, "Wrong alignment on AGSEBlastMeshActor");
static_assert(sizeof(AGSEBlastMeshActor) == 0x000278, "Wrong size on AGSEBlastMeshActor");

// Class GSEngineExtent.GSECameraRig_Rail
// 0x0000 (0x0298 - 0x0298)
class AGSECameraRig_Rail final : public ACameraRig_Rail
{
public:
	float GetSplineLength();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSECameraRig_Rail">();
	}
	static class AGSECameraRig_Rail* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGSECameraRig_Rail>();
	}
};
static_assert(alignof(AGSECameraRig_Rail) == 0x000008, "Wrong alignment on AGSECameraRig_Rail");
static_assert(sizeof(AGSECameraRig_Rail) == 0x000298, "Wrong size on AGSECameraRig_Rail");

// Class GSEngineExtent.GSELuaActor
// 0x0000 (0x0278 - 0x0278)
class AGSELuaActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSELuaActor">();
	}
	static class AGSELuaActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGSELuaActor>();
	}
};
static_assert(alignof(AGSELuaActor) == 0x000008, "Wrong alignment on AGSELuaActor");
static_assert(sizeof(AGSELuaActor) == 0x000278, "Wrong size on AGSELuaActor");

// Class GSEngineExtent.GSELuaStateUObj
// 0x0000 (0x0028 - 0x0028)
class UGSELuaStateUObj final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSELuaStateUObj">();
	}
	static class UGSELuaStateUObj* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSELuaStateUObj>();
	}
};
static_assert(alignof(UGSELuaStateUObj) == 0x000008, "Wrong alignment on UGSELuaStateUObj");
static_assert(sizeof(UGSELuaStateUObj) == 0x000028, "Wrong size on UGSELuaStateUObj");

// Class GSEngineExtent.GSELuaFuncLib
// 0x0000 (0x0028 - 0x0028)
class UGSELuaFuncLib final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSELuaFuncLib">();
	}
	static class UGSELuaFuncLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSELuaFuncLib>();
	}
};
static_assert(alignof(UGSELuaFuncLib) == 0x000008, "Wrong alignment on UGSELuaFuncLib");
static_assert(sizeof(UGSELuaFuncLib) == 0x000028, "Wrong size on UGSELuaFuncLib");

// Class GSEngineExtent.GSPMLocationBoneSocket
// 0x00A0 (0x00D0 - 0x0030)
class UGSPMLocationBoneSocket final : public UParticleModuleLocationBase
{
public:
	ELocationBoneSocketSource                     SourceType;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                UniversalOffset;                                   // 0x0038(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         SelectAllBoneOp : 1;                               // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         ClearAllBoneOp : 1;                                // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLocationBoneSocketInfo>        SourceLocations;                                   // 0x0058(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPMLocationBoneSocketBoneInfo>  NeedAddRootBoneNames;                              // 0x0068(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x10];                                      // 0x0078(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPMLocationBoneSocketBoneInfo>  NeedDeleteRootBoneNames;                           // 0x0088(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_98[0x10];                                      // 0x0098(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	ELocationBoneSocketSelectionMethod            SelectionMethod;                                   // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bUpdatePositionEachFrame : 1;                      // 0x00AC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOrientMeshEmitters : 1;                           // 0x00AC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritBoneVelocity : 1;                          // 0x00AC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InheritVelocityScale;                              // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SkelMeshActorParamName;                            // 0x00B4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumPreSelectedIndices;                             // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAlwaysKeepWorldScale : 1;                         // 0x00C0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RefScaleSocketNameInMesh;                          // 0x00C4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSPMLocationBoneSocket">();
	}
	static class UGSPMLocationBoneSocket* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSPMLocationBoneSocket>();
	}
};
static_assert(alignof(UGSPMLocationBoneSocket) == 0x000008, "Wrong alignment on UGSPMLocationBoneSocket");
static_assert(sizeof(UGSPMLocationBoneSocket) == 0x0000D0, "Wrong size on UGSPMLocationBoneSocket");
static_assert(offsetof(UGSPMLocationBoneSocket, SourceType) == 0x000030, "Member 'UGSPMLocationBoneSocket::SourceType' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, UniversalOffset) == 0x000038, "Member 'UGSPMLocationBoneSocket::UniversalOffset' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, SourceLocations) == 0x000058, "Member 'UGSPMLocationBoneSocket::SourceLocations' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, NeedAddRootBoneNames) == 0x000068, "Member 'UGSPMLocationBoneSocket::NeedAddRootBoneNames' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, NeedDeleteRootBoneNames) == 0x000088, "Member 'UGSPMLocationBoneSocket::NeedDeleteRootBoneNames' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, SelectionMethod) == 0x0000A8, "Member 'UGSPMLocationBoneSocket::SelectionMethod' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, InheritVelocityScale) == 0x0000B0, "Member 'UGSPMLocationBoneSocket::InheritVelocityScale' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, SkelMeshActorParamName) == 0x0000B4, "Member 'UGSPMLocationBoneSocket::SkelMeshActorParamName' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, NumPreSelectedIndices) == 0x0000BC, "Member 'UGSPMLocationBoneSocket::NumPreSelectedIndices' has a wrong offset!");
static_assert(offsetof(UGSPMLocationBoneSocket, RefScaleSocketNameInMesh) == 0x0000C4, "Member 'UGSPMLocationBoneSocket::RefScaleSocketNameInMesh' has a wrong offset!");

// Class GSEngineExtent.GSPMLocationSkelVertSurface
// 0x00C0 (0x00F0 - 0x0030)
class UGSPMLocationSkelVertSurface final : public UParticleModuleLocationBase
{
public:
	ELocationSkelVertSurfaceSource                SourceType;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                UniversalOffset;                                   // 0x0038(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUpdatePositionEachFrame : 1;                      // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOrientMeshEmitters : 1;                           // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritBoneVelocity : 1;                          // 0x0050(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InheritVelocityScale;                              // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SkelMeshActorParamName;                            // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ValidAssociatedBones;                              // 0x0060(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPMLocationSkelVertSurfaceBoneInfo> NeedAddRootBoneNames;                              // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x10];                                      // 0x0080(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPMLocationSkelVertSurfaceBoneInfo> NeedDeleteRootBoneNames;                           // 0x0090(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_A0[0x10];                                      // 0x00A0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         SelectAllBoneOp : 1;                               // 0x00B0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         ClearAllBoneOp : 1;                                // 0x00B0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnforceNormalCheck : 1;                           // 0x00B0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NormalToCompare;                                   // 0x00B8(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalCheckToleranceDegrees;                       // 0x00D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalCheckTolerance;                              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ValidMaterialIndices;                              // 0x00D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bInheritVertexColor : 1;                           // 0x00E8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritUV : 1;                                    // 0x00E8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        InheritUVChannel;                                  // 0x00EC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSPMLocationSkelVertSurface">();
	}
	static class UGSPMLocationSkelVertSurface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSPMLocationSkelVertSurface>();
	}
};
static_assert(alignof(UGSPMLocationSkelVertSurface) == 0x000008, "Wrong alignment on UGSPMLocationSkelVertSurface");
static_assert(sizeof(UGSPMLocationSkelVertSurface) == 0x0000F0, "Wrong size on UGSPMLocationSkelVertSurface");
static_assert(offsetof(UGSPMLocationSkelVertSurface, SourceType) == 0x000030, "Member 'UGSPMLocationSkelVertSurface::SourceType' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, UniversalOffset) == 0x000038, "Member 'UGSPMLocationSkelVertSurface::UniversalOffset' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, InheritVelocityScale) == 0x000054, "Member 'UGSPMLocationSkelVertSurface::InheritVelocityScale' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, SkelMeshActorParamName) == 0x000058, "Member 'UGSPMLocationSkelVertSurface::SkelMeshActorParamName' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, ValidAssociatedBones) == 0x000060, "Member 'UGSPMLocationSkelVertSurface::ValidAssociatedBones' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, NeedAddRootBoneNames) == 0x000070, "Member 'UGSPMLocationSkelVertSurface::NeedAddRootBoneNames' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, NeedDeleteRootBoneNames) == 0x000090, "Member 'UGSPMLocationSkelVertSurface::NeedDeleteRootBoneNames' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, NormalToCompare) == 0x0000B8, "Member 'UGSPMLocationSkelVertSurface::NormalToCompare' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, NormalCheckToleranceDegrees) == 0x0000D0, "Member 'UGSPMLocationSkelVertSurface::NormalCheckToleranceDegrees' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, NormalCheckTolerance) == 0x0000D4, "Member 'UGSPMLocationSkelVertSurface::NormalCheckTolerance' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, ValidMaterialIndices) == 0x0000D8, "Member 'UGSPMLocationSkelVertSurface::ValidMaterialIndices' has a wrong offset!");
static_assert(offsetof(UGSPMLocationSkelVertSurface, InheritUVChannel) == 0x0000EC, "Member 'UGSPMLocationSkelVertSurface::InheritUVChannel' has a wrong offset!");

// Class GSEngineExtent.GSPMBase
// 0x0000 (0x0030 - 0x0030)
class UGSPMBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSPMBase">();
	}
	static class UGSPMBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSPMBase>();
	}
};
static_assert(alignof(UGSPMBase) == 0x000008, "Wrong alignment on UGSPMBase");
static_assert(sizeof(UGSPMBase) == 0x000030, "Wrong size on UGSPMBase");

// Class GSEngineExtent.GSPMMeshSetParamByCurve
// 0x0040 (0x0070 - 0x0030)
class UGSPMMeshSetParamByCurve final : public UGSPMBase
{
public:
	struct FRawDistributionFloat                  FloatCurve;                                        // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                   MeshMaterialParamName;                             // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SkelMeshActorParamName;                            // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSPMMeshSetParamByCurve">();
	}
	static class UGSPMMeshSetParamByCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSPMMeshSetParamByCurve>();
	}
};
static_assert(alignof(UGSPMMeshSetParamByCurve) == 0x000008, "Wrong alignment on UGSPMMeshSetParamByCurve");
static_assert(sizeof(UGSPMMeshSetParamByCurve) == 0x000070, "Wrong size on UGSPMMeshSetParamByCurve");
static_assert(offsetof(UGSPMMeshSetParamByCurve, FloatCurve) == 0x000030, "Member 'UGSPMMeshSetParamByCurve::FloatCurve' has a wrong offset!");
static_assert(offsetof(UGSPMMeshSetParamByCurve, MeshMaterialParamName) == 0x000060, "Member 'UGSPMMeshSetParamByCurve::MeshMaterialParamName' has a wrong offset!");
static_assert(offsetof(UGSPMMeshSetParamByCurve, SkelMeshActorParamName) == 0x000068, "Member 'UGSPMMeshSetParamByCurve::SkelMeshActorParamName' has a wrong offset!");

// Class GSEngineExtent.GSPMSizeScaleKeep
// 0x0010 (0x0040 - 0x0030)
class UGSPMSizeScaleKeep final : public UParticleModuleLocationBase
{
public:
	uint8                                         bAlwaysKeepWorldScale : 1;                         // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RefScaleSocketNameInMesh;                          // 0x0034(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSPMSizeScaleKeep">();
	}
	static class UGSPMSizeScaleKeep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSPMSizeScaleKeep>();
	}
};
static_assert(alignof(UGSPMSizeScaleKeep) == 0x000008, "Wrong alignment on UGSPMSizeScaleKeep");
static_assert(sizeof(UGSPMSizeScaleKeep) == 0x000040, "Wrong size on UGSPMSizeScaleKeep");
static_assert(offsetof(UGSPMSizeScaleKeep, RefScaleSocketNameInMesh) == 0x000034, "Member 'UGSPMSizeScaleKeep::RefScaleSocketNameInMesh' has a wrong offset!");

// Class GSEngineExtent.GSPMWorldOffset
// 0x0000 (0x0098 - 0x0098)
class UGSPMWorldOffset final : public UParticleModuleLocationWorldOffset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSPMWorldOffset">();
	}
	static class UGSPMWorldOffset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSPMWorldOffset>();
	}
};
static_assert(alignof(UGSPMWorldOffset) == 0x000008, "Wrong alignment on UGSPMWorldOffset");
static_assert(sizeof(UGSPMWorldOffset) == 0x000098, "Wrong size on UGSPMWorldOffset");

// Class GSEngineExtent.GSSceneCaptureComponent2D
// 0x0000 (0x0C30 - 0x0C30)
class UGSSceneCaptureComponent2D final : public USceneCaptureComponent2D
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSSceneCaptureComponent2D">();
	}
	static class UGSSceneCaptureComponent2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSSceneCaptureComponent2D>();
	}
};
static_assert(alignof(UGSSceneCaptureComponent2D) == 0x000010, "Wrong alignment on UGSSceneCaptureComponent2D");
static_assert(sizeof(UGSSceneCaptureComponent2D) == 0x000C30, "Wrong size on UGSSceneCaptureComponent2D");

// Class GSEngineExtent.GSViewPortRatioUtil
// 0x0000 (0x0028 - 0x0028)
class UGSViewPortRatioUtil final : public UBlueprintFunctionLibrary
{
public:
	static void CalcCachedData(class UObject* WorldContext, int32* OutRefViewPortWidth, int32* OutRefViewPortHeight, float* OutCfgMaxRatioMin, float* OutCfgMaxRatioMax, float* OutCfgMinRatio, float* OutCfgRefHeightDPIScale, EGSForceRatioType* OutForceRatioTye, EGSConstraintAspectRatioType* OutConstraintAspectRatioType, float* OutRatio);
	static void CalcCameraRatioInner(int32 RefViewPortWidth, int32 RefViewPortHeight, float* TargetRatio, EGSConstraintAspectRatioType* ConstraintAspectRatioType);
	static void CalcCameraRatioInnerWithRatioType(int32 RefViewPortWidth, int32 RefViewPortHeight, EGSForceRatioType InForceRatioType, float* TargetRatio, EGSConstraintAspectRatioType* ConstraintAspectRatioType);
	static EGSForceRatioType GetForceRatioType();
	static void InitSetCfg(float InCfgMaxRatioMin, float InCfgMaxRatioMax, float InCfgMinRatio, float InCfgRefHeightDPIScale);
	static void SetForceRatioType(EGSForceRatioType NewType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSViewPortRatioUtil">();
	}
	static class UGSViewPortRatioUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSViewPortRatioUtil>();
	}
};
static_assert(alignof(UGSViewPortRatioUtil) == 0x000008, "Wrong alignment on UGSViewPortRatioUtil");
static_assert(sizeof(UGSViewPortRatioUtil) == 0x000028, "Wrong size on UGSViewPortRatioUtil");

// Class GSEngineExtent.GSE_WWiseParticleAsset
// 0x0008 (0x0038 - 0x0030)
class UGSE_WWiseParticleAsset final : public UPrimaryDataAsset
{
public:
	class UParticleSystem*                        ParticleSystem;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSE_WWiseParticleAsset">();
	}
	static class UGSE_WWiseParticleAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSE_WWiseParticleAsset>();
	}
};
static_assert(alignof(UGSE_WWiseParticleAsset) == 0x000008, "Wrong alignment on UGSE_WWiseParticleAsset");
static_assert(sizeof(UGSE_WWiseParticleAsset) == 0x000038, "Wrong size on UGSE_WWiseParticleAsset");
static_assert(offsetof(UGSE_WWiseParticleAsset, ParticleSystem) == 0x000030, "Member 'UGSE_WWiseParticleAsset::ParticleSystem' has a wrong offset!");

}
