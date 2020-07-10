#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails.BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C
// 0x0010 (0x0618 - 0x0608)
class ABP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C : public ABP_Weapondealer_C
{
public:
	class UCapsuleComponent*                           SolidHits_1;                                              // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter_1;                                 // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails.BP_Campaign005_CursedSails_WeapondealerWonda_CursedSails_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
