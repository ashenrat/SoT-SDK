#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipStorageBarrel_Cannonball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShipStorageBarrel_Cannonball.BP_MediumShipStorageBarrel_Cannonball_C
// 0x0018 (0x0518 - 0x0500)
class ABP_MediumShipStorageBarrel_Cannonball_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetrySubjectComponent*              ShipTelemetrySubject;                                     // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShipStorageBarrel_Cannonball.BP_MediumShipStorageBarrel_Cannonball_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
