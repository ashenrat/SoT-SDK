#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryRank2_GH_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissaryRank2_GH.BP_PromptActor_EmissaryRank2_GH_C.UserConstructionScript
struct ABP_PromptActor_EmissaryRank2_GH_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_EmissaryRank2_GH.BP_PromptActor_EmissaryRank2_GH_C.ReceiveBeginPlay
struct ABP_PromptActor_EmissaryRank2_GH_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_EmissaryRank2_GH.BP_PromptActor_EmissaryRank2_GH_C.ReceiveEndPlay
struct ABP_PromptActor_EmissaryRank2_GH_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_EmissaryRank2_GH.BP_PromptActor_EmissaryRank2_GH_C.ExecuteUbergraph_BP_PromptActor_EmissaryRank2_GH
struct ABP_PromptActor_EmissaryRank2_GH_C_ExecuteUbergraph_BP_PromptActor_EmissaryRank2_GH_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif