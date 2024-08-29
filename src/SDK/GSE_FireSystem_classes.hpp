#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSE_FireSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GSE_Fire_RTQuene_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GSE_FireSystem.GSE_FireSystem_C
// 0x0088 (0x0300 - 0x0278)
class AGSE_FireSystem_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RT_MDI;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget0;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DampingMDI;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget1;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGSE_Fire_RTQuene>              RTQueneList;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraSystem*                         NiagaraSystem;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGSE_FireEmitterSystem_C*               FireEmitterSystem;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fra;                                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InternalFra;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldPosition;                                       // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddToRTQuene(const struct FGSE_Fire_RTQuene& Input);
	void ExecuteUbergraph_GSE_FireSystem(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RTQuene();
	void SpawnEmitter(const struct FGSE_Fire_RTQuene& Info);
	void SwitchRenderTargetTexture();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GSE_FireSystem_C">();
	}
	static class AGSE_FireSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGSE_FireSystem_C>();
	}
};
static_assert(alignof(AGSE_FireSystem_C) == 0x000008, "Wrong alignment on AGSE_FireSystem_C");
static_assert(sizeof(AGSE_FireSystem_C) == 0x000300, "Wrong size on AGSE_FireSystem_C");
static_assert(offsetof(AGSE_FireSystem_C, UberGraphFrame) == 0x000278, "Member 'AGSE_FireSystem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, Box) == 0x000280, "Member 'AGSE_FireSystem_C::Box' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, Scene) == 0x000288, "Member 'AGSE_FireSystem_C::Scene' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, Plane) == 0x000290, "Member 'AGSE_FireSystem_C::Plane' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, RT_MDI) == 0x000298, "Member 'AGSE_FireSystem_C::RT_MDI' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, RenderTarget0) == 0x0002A0, "Member 'AGSE_FireSystem_C::RenderTarget0' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, DampingMDI) == 0x0002A8, "Member 'AGSE_FireSystem_C::DampingMDI' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, RenderTarget1) == 0x0002B0, "Member 'AGSE_FireSystem_C::RenderTarget1' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, RTQueneList) == 0x0002B8, "Member 'AGSE_FireSystem_C::RTQueneList' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, NiagaraSystem) == 0x0002C8, "Member 'AGSE_FireSystem_C::NiagaraSystem' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, FireEmitterSystem) == 0x0002D0, "Member 'AGSE_FireSystem_C::FireEmitterSystem' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, Fra) == 0x0002D8, "Member 'AGSE_FireSystem_C::Fra' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, InternalFra) == 0x0002E0, "Member 'AGSE_FireSystem_C::InternalFra' has a wrong offset!");
static_assert(offsetof(AGSE_FireSystem_C, OldPosition) == 0x0002E8, "Member 'AGSE_FireSystem_C::OldPosition' has a wrong offset!");

}

