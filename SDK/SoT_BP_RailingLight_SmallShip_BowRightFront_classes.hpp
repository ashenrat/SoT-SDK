#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RailingLight_SmallShip_BowRightFront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailingLight_SmallShip_BowRightFront.BP_RailingLight_SmallShip_BowRightFront_C
// 0x0000 (0x0789 - 0x0789)
class ABP_RailingLight_SmallShip_BowRightFront_C : public ABP_InteractableShipRailingLight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RailingLight_SmallShip_BowRightFront.BP_RailingLight_SmallShip_BowRightFront_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
