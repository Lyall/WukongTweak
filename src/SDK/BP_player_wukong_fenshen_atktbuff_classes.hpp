#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_player_wukong_fenshen_atktbuff

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_player_wukong_fenshen_atktbuff.BP_player_wukong_fenshen_atktbuff_C
// 0x0008 (0x0320 - 0x0318)
class ABP_player_wukong_fenshen_atktbuff_C final : public ABGUMagicFieldBaseCS
{
public:
	class USphereComponent*                       CheckComp_Sphere;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_player_wukong_fenshen_atktbuff_C">();
	}
	static class ABP_player_wukong_fenshen_atktbuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_player_wukong_fenshen_atktbuff_C>();
	}
};
static_assert(alignof(ABP_player_wukong_fenshen_atktbuff_C) == 0x000008, "Wrong alignment on ABP_player_wukong_fenshen_atktbuff_C");
static_assert(sizeof(ABP_player_wukong_fenshen_atktbuff_C) == 0x000320, "Wrong size on ABP_player_wukong_fenshen_atktbuff_C");
static_assert(offsetof(ABP_player_wukong_fenshen_atktbuff_C, CheckComp_Sphere) == 0x000318, "Member 'ABP_player_wukong_fenshen_atktbuff_C::CheckComp_Sphere' has a wrong offset!");

}

