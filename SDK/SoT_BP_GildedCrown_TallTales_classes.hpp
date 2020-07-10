#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GildedCrown_TallTales_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GildedCrown_TallTales.BP_GildedCrown_TallTales_C
// 0x0008 (0x0418 - 0x0410)
class ABP_GildedCrown_TallTales_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_tal_guilded_crown_01_a;                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GildedCrown_TallTales.BP_GildedCrown_TallTales_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
