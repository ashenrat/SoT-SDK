#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_SD_CaptainOfSilveredWaters_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_SD_CaptainOfSilveredWaters.Title_SD_CaptainOfSilveredWaters_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_SD_CaptainOfSilveredWaters_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Title_SD_CaptainOfSilveredWaters.Title_SD_CaptainOfSilveredWaters_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
