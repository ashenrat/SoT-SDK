#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_MediumShip_Cabin_Quest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_MediumShip_Cabin_Quest.BP_Lantern_MediumShip_Cabin_Quest_C
// 0x0000 (0x078D - 0x078D)
class ABP_Lantern_MediumShip_Cabin_Quest_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Lantern_MediumShip_Cabin_Quest.BP_Lantern_MediumShip_Cabin_Quest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
