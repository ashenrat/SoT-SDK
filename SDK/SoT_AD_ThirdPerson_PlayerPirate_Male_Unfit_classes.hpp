#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_PlayerPirate_Male_Unfit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Unfit.AD_ThirdPerson_PlayerPirate_Male_Unfit_C
// 0x0000 (0x0738 - 0x0738)
class UAD_ThirdPerson_PlayerPirate_Male_Unfit_C : public UAD_ThirdPerson_PlayerPirate_Male_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Unfit.AD_ThirdPerson_PlayerPirate_Male_Unfit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
