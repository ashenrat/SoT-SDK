#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_AncientScale_03_Colour_05_Starshine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_AncientScale_03_Colour_05_Starshine.BP_FishingFish_AncientScale_03_Colour_05_Starshine_C
// 0x0000 (0x0900 - 0x0900)
class ABP_FishingFish_AncientScale_03_Colour_05_Starshine_C : public ABP_FishingFish_AncientScale_03_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FishingFish_AncientScale_03_Colour_05_Starshine.BP_FishingFish_AncientScale_03_Colour_05_Starshine_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
