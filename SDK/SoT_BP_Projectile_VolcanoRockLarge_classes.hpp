#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_VolcanoRockLarge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_VolcanoRockLarge.BP_Projectile_VolcanoRockLarge_C
// 0x0018 (0x0678 - 0x0660)
class ABP_Projectile_VolcanoRockLarge_C : public AVolcanicRock
{
public:
	class URotatingAudioSourceComponent*               RotatingAudioSource;                                      // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RockMesh;                                                 // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_VolcanoRockLarge.BP_Projectile_VolcanoRockLarge_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
