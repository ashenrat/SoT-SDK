#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BoilingWaterProjectile_NoSplash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BoilingWaterProjectile_NoSplash.BP_BoilingWaterProjectile_NoSplash_C
// 0x0000 (0x0748 - 0x0748)
class ABP_BoilingWaterProjectile_NoSplash_C : public ABP_BoilingWaterProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BoilingWaterProjectile_NoSplash.BP_BoilingWaterProjectile_NoSplash_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
