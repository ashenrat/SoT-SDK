// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FirePropagationActor_LargeShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FirePropagationActor_LargeShip.BP_FirePropagationActor_LargeShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FirePropagationActor_LargeShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FirePropagationActor_LargeShip.BP_FirePropagationActor_LargeShip_C.UserConstructionScript");

	ABP_FirePropagationActor_LargeShip_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
