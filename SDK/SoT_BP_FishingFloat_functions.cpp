// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFloat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishingFloat.BP_FishingFloat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FishingFloat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingFloat.BP_FishingFloat_C.UserConstructionScript");

	ABP_FishingFloat_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
