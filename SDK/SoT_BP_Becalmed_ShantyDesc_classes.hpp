#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Becalmed_ShantyDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Becalmed_ShantyDesc.BP_Becalmed_ShantyDesc_C
// 0x0000 (0x0118 - 0x0118)
class UBP_Becalmed_ShantyDesc_C : public UShantyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Becalmed_ShantyDesc.BP_Becalmed_ShantyDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif