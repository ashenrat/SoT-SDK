#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_MasterofEternalEmissaries_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_MasterofEternalEmissaries.Title_MasterofEternalEmissaries_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_MasterofEternalEmissaries_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Title_MasterofEternalEmissaries.Title_MasterofEternalEmissaries_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif