#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaRigging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaRigging.InstancedRopeComponent
// 0x00D0 (0x0640 - 0x0570)
class UInstancedRopeComponent : public UPrimitiveComponent
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FInstancedRopeParams>                Ropes;                                                    // 0x0578(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                ShadowLOD;                                                // 0x0588(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x058C(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaRigging.InstancedRopeComponent"));
		return ptr;
	}


	void SetUnderwater(bool Underwater);
	void SetRopes(TArray<struct FInstancedRopeParams> InRopes);
};


// Class AthenaRigging.MaterialExpressionRopeParameter
// 0x0008 (0x0078 - 0x0070)
class UMaterialExpressionRopeParameter : public UMaterialExpression
{
public:
	TEnumAsByte<EInstancedRopeParameterType>           RopeParameterType;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaRigging.MaterialExpressionRopeParameter"));
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystem
// 0x0150 (0x05A8 - 0x0458)
class ARiggingSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedRopeComponent*                     InstancedRopes;                                           // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FRiggingSystemLine>                  Lines;                                                    // 0x0470(0x0010) (ZeroConstructor)
	TArray<struct FInstancedRopeParams>                Ropes;                                                    // 0x0480(0x0010) (ZeroConstructor)
	TArray<class UMobileInstancedStaticMeshComponent*> PulleyInstances;                                          // 0x0490(0x0010) (ExportObject, ZeroConstructor)
	struct FRiggingSystemPulleyData                    Pulleys;                                                  // 0x04A0(0x0060)
	TArray<struct FSocketId>                           Sockets;                                                  // 0x0500(0x0010) (ZeroConstructor)
	TArray<float>                                      InitialMainRopeLengths;                                   // 0x0510(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0520(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaRigging.RiggingSystem"));
		return ptr;
	}

};


// Class AthenaRigging.RiggingSystemComponent
// 0x0040 (0x02D0 - 0x0290)
class URiggingSystemComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0290(0x0018) MISSED OFFSET
	TArray<struct FRiggingSystemLineGroup>             LineGroups;                                               // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ARiggingSystem*                              Impl;                                                     // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaRigging.RiggingSystemComponent"));
		return ptr;
	}


	void SetSocketLookupSource(class AActor* InSocketSource);
	int ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset);
};


// Class AthenaRigging.RopeCatenaryRenderComponent
// 0x0000 (0x0610 - 0x0610)
class URopeCatenaryRenderComponent : public UCordRenderComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaRigging.RopeCatenaryRenderComponent"));
		return ptr;
	}

};


// Class AthenaRigging.RopeInterface
// 0x0000 (0x0028 - 0x0028)
class URopeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaRigging.RopeInterface"));
		return ptr;
	}


	void SetRopeUVOffset(float InUVOffset);
	void SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
