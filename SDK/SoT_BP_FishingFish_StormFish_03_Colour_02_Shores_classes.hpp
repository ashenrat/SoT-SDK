#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_StormFish_03_Colour_02_Shores_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_StormFish_03_Colour_02_Shores.BP_FishingFish_StormFish_03_Colour_02_Shores_C
// 0x0000 (0x0900 - 0x0900)
class ABP_FishingFish_StormFish_03_Colour_02_Shores_C : public ABP_FishingFish_StormFish_03_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_StormFish_03_Colour_02_Shores.BP_FishingFish_StormFish_03_Colour_02_Shores_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
