#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Tasha_LegendaryStoryteller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Tasha_LegendaryStoryteller.BP_Anim_Tasha_LegendaryStoryteller_C
// 0x0000 (0x1975 - 0x1975)
class UBP_Anim_Tasha_LegendaryStoryteller_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_Anim_Tasha_LegendaryStoryteller.BP_Anim_Tasha_LegendaryStoryteller_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
