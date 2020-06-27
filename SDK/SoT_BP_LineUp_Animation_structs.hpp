#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_BP_LineUp_Props_classes.hpp"
#include "SoT_BP_LineUp_AnimSequences_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_LineUp_Animation.BP_LineUp_Animation
// 0x00C8
struct FBP_LineUp_Animation
{
	struct FName                                       Name_59_3C9AB8EB479740392DD45F84762DEAC2;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_LineUp_AnimSequences                    Animations_31_D6E79A8941796EB29DEB6D8F72BDBE18;           // 0x0008(0x0040) (Edit, BlueprintVisible)
	struct FBP_LineUp_AnimSequences                    PropAnimations_33_9F89CE1547E363203FDA03AE8E890EFB;       // 0x0048(0x0040) (Edit, BlueprintVisible)
	struct FBP_LineUp_Props                            PrimaryProp_49_CB0B67514F65AB892C9408AEF5CD43FE;          // 0x0088(0x0020) (Edit, BlueprintVisible)
	struct FBP_LineUp_Props                            SecondaryProp_50_914BF80841A205A0099F92A05F01EFC8;        // 0x00A8(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
