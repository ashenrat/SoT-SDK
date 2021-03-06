#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EmissaryFramework.EEmisaryCompanyActionType
enum class EEmisaryCompanyActionType : uint8_t
{
	EEmisaryCompanyActionType__CompleteRiddleStep = 0,
	EEmisaryCompanyActionType__CompleteRiddleQuest = 1,
	EEmisaryCompanyActionType__CompleteXMarksTheSpotQuest = 2,
	EEmisaryCompanyActionType__DefeatNamedSkeleton = 3,
	EEmisaryCompanyActionType__CompleteBountyQuest = 4,
	EEmisaryCompanyActionType__CompleteCargoRunStep = 5,
	EEmisaryCompanyActionType__CompleteCargoRunQuest = 6,
	EEmisaryCompanyActionType__CompleteMerchantStep = 7,
	EEmisaryCompanyActionType__CompleteMerchantQuest = 8,
	EEmisaryCompanyActionType__CompleteGhostShipQuest = 9,
	EEmisaryCompanyActionType__MapPieceFound = 10,
	EEmisaryCompanyActionType__CompleteWayfinderVoyage = 11,
	EEmisaryCompanyActionType__EEmisaryCompanyActionType_MAX = 12
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostServiceEvent
// 0x0018
struct FEmissaryGlobalActionRewardBoostServiceEvent
{
	class UClass*                                      FinishedEventType;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryCompanyActionRewardBoostServiceEvent
// 0x001C
struct FEmissaryCompanyActionRewardBoostServiceEvent
{
	struct FName                                       AssociatedCompany;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       AssociatedCrew;                                           // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostEvent
// 0x0008
struct FEmissaryGlobalActionRewardBoostEvent
{
	class UClass*                                      GameEventType;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryNonQuestCompanyActionRewardBoostEvent
// 0x0001
struct FEmissaryNonQuestCompanyActionRewardBoostEvent
{
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryQuestCompanyActionRewardBoostEvent
// 0x0014
struct FEmissaryQuestCompanyActionRewardBoostEvent
{
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       QuestId;                                                  // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryCompanyChangedEvent
// 0x0010
struct FEmissaryCompanyChangedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
