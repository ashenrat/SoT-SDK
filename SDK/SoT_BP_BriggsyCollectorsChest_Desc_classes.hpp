#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BriggsyCollectorsChest_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BriggsyCollectorsChest_Desc.BP_BriggsyCollectorsChest_Desc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_BriggsyCollectorsChest_Desc_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BriggsyCollectorsChest_Desc.BP_BriggsyCollectorsChest_Desc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
