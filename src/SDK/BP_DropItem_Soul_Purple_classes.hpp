#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropItem_Soul_Purple

#include "Basic.hpp"

#include "BP_DropItemActorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DropItem_Soul_Purple.BP_DropItem_Soul_Purple_C
// 0x0018 (0x0338 - 0x0320)
class ABP_DropItem_Soul_Purple_C final : public ABP_DropItemActorBase_C
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DropItem_Soul_Purple_C">();
	}
	static class ABP_DropItem_Soul_Purple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DropItem_Soul_Purple_C>();
	}
};
static_assert(alignof(ABP_DropItem_Soul_Purple_C) == 0x000008, "Wrong alignment on ABP_DropItem_Soul_Purple_C");
static_assert(sizeof(ABP_DropItem_Soul_Purple_C) == 0x000338, "Wrong size on ABP_DropItem_Soul_Purple_C");
static_assert(offsetof(ABP_DropItem_Soul_Purple_C, Niagara) == 0x000320, "Member 'ABP_DropItem_Soul_Purple_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_DropItem_Soul_Purple_C, Cube) == 0x000328, "Member 'ABP_DropItem_Soul_Purple_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_DropItem_Soul_Purple_C, Scene) == 0x000330, "Member 'ABP_DropItem_Soul_Purple_C::Scene' has a wrong offset!");

}

