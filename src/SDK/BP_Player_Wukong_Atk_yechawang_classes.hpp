#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Player_Wukong_Atk_yechawang

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Player_Wukong_Atk_yechawang.BP_Player_Wukong_Atk_yechawang_C
// 0x0010 (0x0348 - 0x0338)
class ABP_Player_Wukong_Atk_yechawang_C final : public ABGUBulletBaseManaged
{
public:
	class UStaticMeshComponent*                   CheckComp_Custom;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NG;                                                // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Player_Wukong_Atk_yechawang_C">();
	}
	static class ABP_Player_Wukong_Atk_yechawang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Player_Wukong_Atk_yechawang_C>();
	}
};
static_assert(alignof(ABP_Player_Wukong_Atk_yechawang_C) == 0x000008, "Wrong alignment on ABP_Player_Wukong_Atk_yechawang_C");
static_assert(sizeof(ABP_Player_Wukong_Atk_yechawang_C) == 0x000348, "Wrong size on ABP_Player_Wukong_Atk_yechawang_C");
static_assert(offsetof(ABP_Player_Wukong_Atk_yechawang_C, CheckComp_Custom) == 0x000338, "Member 'ABP_Player_Wukong_Atk_yechawang_C::CheckComp_Custom' has a wrong offset!");
static_assert(offsetof(ABP_Player_Wukong_Atk_yechawang_C, NG) == 0x000340, "Member 'ABP_Player_Wukong_Atk_yechawang_C::NG' has a wrong offset!");

}

