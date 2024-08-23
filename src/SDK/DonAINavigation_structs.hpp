#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonAINavigation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum DonAINavigation.EDonNavigationQueryStatus
// NumValues: 0x0007
enum class EDonNavigationQueryStatus : uint8
{
	Unscheduled                              = 0,
	InProgress                               = 1,
	Success                                  = 2,
	Failure                                  = 3,
	QueryHasNoSolution                       = 4,
	TimedOut                                 = 5,
	EDonNavigationQueryStatus_MAX            = 6,
};

// ScriptStruct DonAINavigation.DonNavigationPathFindingResult
// 0x0018 (0x0018 - 0x0000)
struct FDonNavigationPathFindingResult final
{
public:
	float                                         PathCost;                                          // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PathLength;                                        // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        PathPoints;                                        // 0x0008(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDonNavigationPathFindingResult) == 0x000008, "Wrong alignment on FDonNavigationPathFindingResult");
static_assert(sizeof(FDonNavigationPathFindingResult) == 0x000018, "Wrong size on FDonNavigationPathFindingResult");
static_assert(offsetof(FDonNavigationPathFindingResult, PathCost) == 0x000000, "Member 'FDonNavigationPathFindingResult::PathCost' has a wrong offset!");
static_assert(offsetof(FDonNavigationPathFindingResult, PathLength) == 0x000004, "Member 'FDonNavigationPathFindingResult::PathLength' has a wrong offset!");
static_assert(offsetof(FDonNavigationPathFindingResult, PathPoints) == 0x000008, "Member 'FDonNavigationPathFindingResult::PathPoints' has a wrong offset!");

// ScriptStruct DonAINavigation.DonNavigationDynamicCollisionPayload
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FDonNavigationDynamicCollisionPayload final
{
public:
	TWeakObjectPtr<class AActor>                  OwnerPayload;                                      // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x40];                                       // 0x0008(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDonNavigationDynamicCollisionPayload) == 0x000008, "Wrong alignment on FDonNavigationDynamicCollisionPayload");
static_assert(sizeof(FDonNavigationDynamicCollisionPayload) == 0x000048, "Wrong size on FDonNavigationDynamicCollisionPayload");
static_assert(offsetof(FDonNavigationDynamicCollisionPayload, OwnerPayload) == 0x000000, "Member 'FDonNavigationDynamicCollisionPayload::OwnerPayload' has a wrong offset!");

// ScriptStruct DonAINavigation.DoNNavigationQueryParams
// 0x0020 (0x0020 - 0x0000)
struct FDoNNavigationQueryParams final
{
public:
	float                                         QueryTimeout;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFlexibleOriginGoal;                               // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipOptimizationPass;                             // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxOptimizerSweepAttemptsPerNode;                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreciseDynamicCollisionRepathing;                 // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreDynamicCollisionRepathingForDirectGoals;    // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionShapeInflation;                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceRescheduleQuery;                             // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class AActor>                  OwnerPayload;                                      // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDoNNavigationQueryParams) == 0x000004, "Wrong alignment on FDoNNavigationQueryParams");
static_assert(sizeof(FDoNNavigationQueryParams) == 0x000020, "Wrong size on FDoNNavigationQueryParams");
static_assert(offsetof(FDoNNavigationQueryParams, QueryTimeout) == 0x000000, "Member 'FDoNNavigationQueryParams::QueryTimeout' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, bFlexibleOriginGoal) == 0x000004, "Member 'FDoNNavigationQueryParams::bFlexibleOriginGoal' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, bSkipOptimizationPass) == 0x000005, "Member 'FDoNNavigationQueryParams::bSkipOptimizationPass' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, MaxOptimizerSweepAttemptsPerNode) == 0x000008, "Member 'FDoNNavigationQueryParams::MaxOptimizerSweepAttemptsPerNode' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, bPreciseDynamicCollisionRepathing) == 0x00000C, "Member 'FDoNNavigationQueryParams::bPreciseDynamicCollisionRepathing' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, bIgnoreDynamicCollisionRepathingForDirectGoals) == 0x00000D, "Member 'FDoNNavigationQueryParams::bIgnoreDynamicCollisionRepathingForDirectGoals' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, CollisionShapeInflation) == 0x000010, "Member 'FDoNNavigationQueryParams::CollisionShapeInflation' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, bForceRescheduleQuery) == 0x000014, "Member 'FDoNNavigationQueryParams::bForceRescheduleQuery' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryParams, OwnerPayload) == 0x000018, "Member 'FDoNNavigationQueryParams::OwnerPayload' has a wrong offset!");

// ScriptStruct DonAINavigation.DoNNavigationQueryData
// 0x02B8 (0x02B8 - 0x0000)
struct FDoNNavigationQueryData final
{
public:
	TWeakObjectPtr<class AActor>                  Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>     CollisionComponent;                                // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Destination;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoNNavigationQueryParams              QueryParams;                                       // 0x0040(0x0020)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x240];                                     // 0x0060(0x0240)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        PathSolutionOptimized;                             // 0x02A0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	EDonNavigationQueryStatus                     QueryStatus;                                       // 0x02B0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDoNNavigationQueryData) == 0x000008, "Wrong alignment on FDoNNavigationQueryData");
static_assert(sizeof(FDoNNavigationQueryData) == 0x0002B8, "Wrong size on FDoNNavigationQueryData");
static_assert(offsetof(FDoNNavigationQueryData, Actor) == 0x000000, "Member 'FDoNNavigationQueryData::Actor' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryData, CollisionComponent) == 0x000008, "Member 'FDoNNavigationQueryData::CollisionComponent' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryData, Origin) == 0x000010, "Member 'FDoNNavigationQueryData::Origin' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryData, Destination) == 0x000028, "Member 'FDoNNavigationQueryData::Destination' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryData, QueryParams) == 0x000040, "Member 'FDoNNavigationQueryData::QueryParams' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryData, PathSolutionOptimized) == 0x0002A0, "Member 'FDoNNavigationQueryData::PathSolutionOptimized' has a wrong offset!");
static_assert(offsetof(FDoNNavigationQueryData, QueryStatus) == 0x0002B0, "Member 'FDoNNavigationQueryData::QueryStatus' has a wrong offset!");

// ScriptStruct DonAINavigation.DonNavigationVoxel
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FDonNavigationVoxel final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDonNavigationVoxel) == 0x000008, "Wrong alignment on FDonNavigationVoxel");
static_assert(sizeof(FDonNavigationVoxel) == 0x000040, "Wrong size on FDonNavigationVoxel");

// ScriptStruct DonAINavigation.DonNavVoxelY
// 0x0010 (0x0010 - 0x0000)
struct FDonNavVoxelY final
{
public:
	TArray<struct FDonNavigationVoxel>            Z;                                                 // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDonNavVoxelY) == 0x000008, "Wrong alignment on FDonNavVoxelY");
static_assert(sizeof(FDonNavVoxelY) == 0x000010, "Wrong size on FDonNavVoxelY");
static_assert(offsetof(FDonNavVoxelY, Z) == 0x000000, "Member 'FDonNavVoxelY::Z' has a wrong offset!");

// ScriptStruct DonAINavigation.DonVoxelCollisionProfile
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FDonVoxelCollisionProfile final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDonVoxelCollisionProfile) == 0x000008, "Wrong alignment on FDonVoxelCollisionProfile");
static_assert(sizeof(FDonVoxelCollisionProfile) == 0x000020, "Wrong size on FDonVoxelCollisionProfile");

// ScriptStruct DonAINavigation.DonNavigationDynamicCollisionNotifyee
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FDonNavigationDynamicCollisionNotifyee final
{
public:
	TDelegate<void(struct FDonNavigationDynamicCollisionPayload& Data)> Listener;                                          // 0x0000(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x48];                                      // 0x0010(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDonNavigationDynamicCollisionNotifyee) == 0x000008, "Wrong alignment on FDonNavigationDynamicCollisionNotifyee");
static_assert(sizeof(FDonNavigationDynamicCollisionNotifyee) == 0x000058, "Wrong size on FDonNavigationDynamicCollisionNotifyee");
static_assert(offsetof(FDonNavigationDynamicCollisionNotifyee, Listener) == 0x000000, "Member 'FDonNavigationDynamicCollisionNotifyee::Listener' has a wrong offset!");

// ScriptStruct DonAINavigation.DonNavVoxelX
// 0x0010 (0x0010 - 0x0000)
struct FDonNavVoxelX final
{
public:
	TArray<struct FDonNavVoxelY>                  Y;                                                 // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDonNavVoxelX) == 0x000008, "Wrong alignment on FDonNavVoxelX");
static_assert(sizeof(FDonNavVoxelX) == 0x000010, "Wrong size on FDonNavVoxelX");
static_assert(offsetof(FDonNavVoxelX, Y) == 0x000000, "Member 'FDonNavVoxelX::Y' has a wrong offset!");

// ScriptStruct DonAINavigation.DonNavVoxelXYZ
// 0x0010 (0x0010 - 0x0000)
struct FDonNavVoxelXYZ final
{
public:
	TArray<struct FDonNavVoxelX>                  X;                                                 // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDonNavVoxelXYZ) == 0x000008, "Wrong alignment on FDonNavVoxelXYZ");
static_assert(sizeof(FDonNavVoxelXYZ) == 0x000010, "Wrong size on FDonNavVoxelXYZ");
static_assert(offsetof(FDonNavVoxelXYZ, X) == 0x000000, "Member 'FDonNavVoxelXYZ::X' has a wrong offset!");

// ScriptStruct DonAINavigation.DoNNavigationDebugParams
// 0x000C (0x000C - 0x0000)
struct FDoNNavigationDebugParams final
{
public:
	bool                                          DrawDebugVolumes;                                  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          VisualizeRawPath;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          VisualizeOptimizedPath;                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          VisualizeInRealTime;                               // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LineThickness;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LineDuration;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDoNNavigationDebugParams) == 0x000004, "Wrong alignment on FDoNNavigationDebugParams");
static_assert(sizeof(FDoNNavigationDebugParams) == 0x00000C, "Wrong size on FDoNNavigationDebugParams");
static_assert(offsetof(FDoNNavigationDebugParams, DrawDebugVolumes) == 0x000000, "Member 'FDoNNavigationDebugParams::DrawDebugVolumes' has a wrong offset!");
static_assert(offsetof(FDoNNavigationDebugParams, VisualizeRawPath) == 0x000001, "Member 'FDoNNavigationDebugParams::VisualizeRawPath' has a wrong offset!");
static_assert(offsetof(FDoNNavigationDebugParams, VisualizeOptimizedPath) == 0x000002, "Member 'FDoNNavigationDebugParams::VisualizeOptimizedPath' has a wrong offset!");
static_assert(offsetof(FDoNNavigationDebugParams, VisualizeInRealTime) == 0x000003, "Member 'FDoNNavigationDebugParams::VisualizeInRealTime' has a wrong offset!");
static_assert(offsetof(FDoNNavigationDebugParams, LineThickness) == 0x000004, "Member 'FDoNNavigationDebugParams::LineThickness' has a wrong offset!");
static_assert(offsetof(FDoNNavigationDebugParams, LineDuration) == 0x000008, "Member 'FDoNNavigationDebugParams::LineDuration' has a wrong offset!");

// ScriptStruct DonAINavigation.DonNavigationTask
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FDonNavigationTask
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDonNavigationTask) == 0x000008, "Wrong alignment on FDonNavigationTask");
static_assert(sizeof(FDonNavigationTask) == 0x000008, "Wrong size on FDonNavigationTask");

// ScriptStruct DonAINavigation.DonNavigationQueryTask
// 0x02E0 (0x02E8 - 0x0008)
struct FDonNavigationQueryTask final : public FDonNavigationTask
{
public:
	uint8                                         Pad_8[0x2C0];                                      // 0x0008(0x02C0)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FDoNNavigationQueryData& Data)> ResultHandler;                                     // 0x02C8(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TDelegate<void(struct FDonNavigationDynamicCollisionPayload& Data)> DynamicCollisionListener;                          // 0x02D8(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDonNavigationQueryTask) == 0x000008, "Wrong alignment on FDonNavigationQueryTask");
static_assert(sizeof(FDonNavigationQueryTask) == 0x0002E8, "Wrong size on FDonNavigationQueryTask");
static_assert(offsetof(FDonNavigationQueryTask, ResultHandler) == 0x0002C8, "Member 'FDonNavigationQueryTask::ResultHandler' has a wrong offset!");
static_assert(offsetof(FDonNavigationQueryTask, DynamicCollisionListener) == 0x0002D8, "Member 'FDonNavigationQueryTask::DynamicCollisionListener' has a wrong offset!");

// ScriptStruct DonAINavigation.DonNavigationDynamicCollisionTask
// 0x0160 (0x0168 - 0x0008)
struct FDonNavigationDynamicCollisionTask final : public FDonNavigationTask
{
public:
	uint8                                         Pad_8[0x160];                                      // 0x0008(0x0160)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDonNavigationDynamicCollisionTask) == 0x000008, "Wrong alignment on FDonNavigationDynamicCollisionTask");
static_assert(sizeof(FDonNavigationDynamicCollisionTask) == 0x000168, "Wrong size on FDonNavigationDynamicCollisionTask");

}
