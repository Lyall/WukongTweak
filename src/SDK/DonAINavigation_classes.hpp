#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonAINavigation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DonAINavigation_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DonAINavigation.DonNavigationHelper
// 0x0000 (0x0028 - 0x0028)
class UDonNavigationHelper final : public UBlueprintFunctionLibrary
{
public:
	static void AddMovementInputCustom(class UObject* Object, const struct FVector& WorldDirection, float ScaleValue);
	static class ADonNavigationManager* DonNavigationManager(class UObject* WorldContextObject);
	static class ADonNavigationManager* DonNavigationManagerForActor(const class AActor* Actor);
	static int32 GetQueryDataVolumeSolutionNum(const struct FDoNNavigationQueryData& QueryData);
	static int32 GetQueryDataVolumeSolutionOptimizedNum(const struct FDoNNavigationQueryData& QueryData);
	static void OnLocomotionAbort(class UObject* Object);
	static void OnLocomotionBegin(class UObject* Object);
	static void OnLocomotionEnd(class UObject* Object, const bool bLocomotionSuccess);
	static void OnNextSegment(class UObject* Object, const struct FVector& NextPoint);
	static void OnUpdateDynamicCollision(class UPrimitiveComponent* Mesh, bool bDebug);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigationHelper">();
	}
	static class UDonNavigationHelper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDonNavigationHelper>();
	}
};
static_assert(alignof(UDonNavigationHelper) == 0x000008, "Wrong alignment on UDonNavigationHelper");
static_assert(sizeof(UDonNavigationHelper) == 0x000028, "Wrong size on UDonNavigationHelper");

// Class DonAINavigation.DonNavigationManager
// 0x7068 (0x72E0 - 0x0278)
class alignas(0x10) ADonNavigationManager : public AActor
{
public:
	uint8                                         Pad_278[0x1F4];                                    // 0x0278(0x01F4)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsUnbound;                                        // 0x046C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneComponent;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                    Billboard;                                         // 0x0478(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_480[0x10];                                     // 0x0480(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VoxelSize;                                         // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         XGridSize;                                         // 0x0494(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         YGridSize;                                         // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZGridSize;                                         // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoNNavigationDebugParams              ManagerDebugParams;                                // 0x04A0(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4AC[0x4];                                      // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECollisionChannel>                     ObstacleQueryChannels;                             // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ActorsToIgnoreForCollision;                        // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 AutoCorrectionGuessList;                           // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         UnrealPhyxPenetrationDepth;                        // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PerformCollisionChecksOnStartup;                   // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMultiThreadingEnabled;                            // 0x04E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E6[0x2];                                      // 0x04E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxPathSolverIterationsPerTick;                    // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsPerTick;               // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPathSolverIterationsOnThread;                   // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsOnThread;              // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPathSolverIterationsPerTick_Unbound;            // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsPerTick_Unbound;       // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPathSolverIterationsOnThread_Unbound;           // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsOnThread_Unbound;      // 0x0504(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                          WorldBoundaryVisualizer;                           // 0x0508(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayWorldBoundary;                             // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayWorldBoundaryInGame;                       // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_512[0x2];                                      // 0x0512(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DebugVoxelsLineThickness;                          // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRunDebugValidationsForDynamicCollisions;          // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_519[0x6C47];                                   // 0x0519(0x6C47)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class AActor*>                           ActiveNavigationTaskOwners;                        // 0x7160(0x0050)(NativeAccessSpecifierPrivate)
	TSet<class UPrimitiveComponent*>              ActiveCollisionTaskOwners;                         // 0x71B0(0x0050)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_7200[0xE0];                                    // 0x7200(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AbortPathfindingTask(class AActor* Actor);
	bool CanNavigate(const struct FVector& Location);
	void ConstructBuilder();
	void Debug_DrawAllVolumes(float LineThickness);
	void Debug_DrawVolumesAroundPoint(const struct FVector& Location, int32 CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes);
	void Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration);
	bool FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams);
	struct FVector FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
	struct FVector FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
	bool IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
	bool IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
	bool NavPathQuery(class AActor* Actor, const struct FVector& Destination, int32 MaxIterations, struct FDonNavigationPathFindingResult* OutResult);
	bool ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, TDelegate<void(bool bTaskSuccessful)> ResultHandler, class FName CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug);
	bool SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, TDelegate<void(struct FDoNNavigationQueryData& Data)> ResultHandlerDelegate, TDelegate<void(struct FDonNavigationDynamicCollisionPayload& Data)> DynamicCollisionListener);
	void StopListeningToDynamicCollisionsForPath(TDelegate<void(struct FDonNavigationDynamicCollisionPayload& Data)> ListenerToClear, const struct FDoNNavigationQueryData& QueryData);
	void StopListeningToDynamicCollisionsForPathIndex(TDelegate<void(struct FDonNavigationDynamicCollisionPayload& Data)> ListenerToClear, const struct FDoNNavigationQueryData& QueryData, const int32 VolumeIndex);
	void VisualizeDynamicCollisionListeners(TDelegate<void(struct FDonNavigationDynamicCollisionPayload& Data)> Listener, struct FDoNNavigationQueryData* QueryData);
	void VisualizeNavResult(const TArray<struct FVector>& PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor);

	struct FVector ClampLocationToNavigableWorld(const struct FVector& DesiredLocation) const;
	void Debug_ClearAllVolumes() const;
	void Debug_ToggleWorldBoundaryInGame() const;
	bool HasTask(class AActor* Actor) const;
	bool IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, const TArray<class AActor*>& ActorsToIgnore, bool bFindInitialOverlaps) const;
	bool IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight) const;
	bool IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation) const;
	bool IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigationManager">();
	}
	static class ADonNavigationManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADonNavigationManager>();
	}
};
static_assert(alignof(ADonNavigationManager) == 0x000010, "Wrong alignment on ADonNavigationManager");
static_assert(sizeof(ADonNavigationManager) == 0x0072E0, "Wrong size on ADonNavigationManager");
static_assert(offsetof(ADonNavigationManager, bIsUnbound) == 0x00046C, "Member 'ADonNavigationManager::bIsUnbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, SceneComponent) == 0x000470, "Member 'ADonNavigationManager::SceneComponent' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, Billboard) == 0x000478, "Member 'ADonNavigationManager::Billboard' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, VoxelSize) == 0x000490, "Member 'ADonNavigationManager::VoxelSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, XGridSize) == 0x000494, "Member 'ADonNavigationManager::XGridSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, YGridSize) == 0x000498, "Member 'ADonNavigationManager::YGridSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ZGridSize) == 0x00049C, "Member 'ADonNavigationManager::ZGridSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ManagerDebugParams) == 0x0004A0, "Member 'ADonNavigationManager::ManagerDebugParams' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ObstacleQueryChannels) == 0x0004B0, "Member 'ADonNavigationManager::ObstacleQueryChannels' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ActorsToIgnoreForCollision) == 0x0004C0, "Member 'ADonNavigationManager::ActorsToIgnoreForCollision' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, AutoCorrectionGuessList) == 0x0004D0, "Member 'ADonNavigationManager::AutoCorrectionGuessList' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, UnrealPhyxPenetrationDepth) == 0x0004E0, "Member 'ADonNavigationManager::UnrealPhyxPenetrationDepth' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, PerformCollisionChecksOnStartup) == 0x0004E4, "Member 'ADonNavigationManager::PerformCollisionChecksOnStartup' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bMultiThreadingEnabled) == 0x0004E5, "Member 'ADonNavigationManager::bMultiThreadingEnabled' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsPerTick) == 0x0004E8, "Member 'ADonNavigationManager::MaxPathSolverIterationsPerTick' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsPerTick) == 0x0004EC, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsPerTick' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsOnThread) == 0x0004F0, "Member 'ADonNavigationManager::MaxPathSolverIterationsOnThread' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsOnThread) == 0x0004F4, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsOnThread' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsPerTick_Unbound) == 0x0004F8, "Member 'ADonNavigationManager::MaxPathSolverIterationsPerTick_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsPerTick_Unbound) == 0x0004FC, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsPerTick_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsOnThread_Unbound) == 0x000500, "Member 'ADonNavigationManager::MaxPathSolverIterationsOnThread_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsOnThread_Unbound) == 0x000504, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsOnThread_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, WorldBoundaryVisualizer) == 0x000508, "Member 'ADonNavigationManager::WorldBoundaryVisualizer' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bDisplayWorldBoundary) == 0x000510, "Member 'ADonNavigationManager::bDisplayWorldBoundary' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bDisplayWorldBoundaryInGame) == 0x000511, "Member 'ADonNavigationManager::bDisplayWorldBoundaryInGame' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, DebugVoxelsLineThickness) == 0x000514, "Member 'ADonNavigationManager::DebugVoxelsLineThickness' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bRunDebugValidationsForDynamicCollisions) == 0x000518, "Member 'ADonNavigationManager::bRunDebugValidationsForDynamicCollisions' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ActiveNavigationTaskOwners) == 0x007160, "Member 'ADonNavigationManager::ActiveNavigationTaskOwners' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ActiveCollisionTaskOwners) == 0x0071B0, "Member 'ADonNavigationManager::ActiveCollisionTaskOwners' has a wrong offset!");

// Class DonAINavigation.DonNavigationManagerUnbound
// 0x0000 (0x72E0 - 0x72E0)
class ADonNavigationManagerUnbound final : public ADonNavigationManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigationManagerUnbound">();
	}
	static class ADonNavigationManagerUnbound* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADonNavigationManagerUnbound>();
	}
};
static_assert(alignof(ADonNavigationManagerUnbound) == 0x000010, "Wrong alignment on ADonNavigationManagerUnbound");
static_assert(sizeof(ADonNavigationManagerUnbound) == 0x0072E0, "Wrong size on ADonNavigationManagerUnbound");

// Class DonAINavigation.DonNavigator
// 0x0000 (0x0028 - 0x0028)
class IDonNavigator final : public IInterface
{
public:
	void AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue);
	void OnLocomotionAbort();
	void OnLocomotionBegin();
	void OnLocomotionEnd(const bool bLocomotionSuccess);
	void OnNextSegment(const struct FVector& NextPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigator">();
	}
	static class IDonNavigator* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDonNavigator>();
	}
};
static_assert(alignof(IDonNavigator) == 0x000008, "Wrong alignment on IDonNavigator");
static_assert(sizeof(IDonNavigator) == 0x000028, "Wrong size on IDonNavigator");

}
