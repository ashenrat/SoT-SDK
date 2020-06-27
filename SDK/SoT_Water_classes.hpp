#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Water_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Water.AthenaFFTWater
// 0x0028 (0x0480 - 0x0458)
class AAthenaFFTWater : public AFFTWater
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0458(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.AthenaFFTWater");
		return ptr;
	}

};


// Class Water.WaterEmissionVolumeInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterEmissionVolumeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterEmissionVolumeInterface");
		return ptr;
	}

};


// Class Water.AthenaWaterEmissionVolume
// 0x0008 (0x0420 - 0x0418)
class AAthenaWaterEmissionVolume : public AWaterEmissionVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.AthenaWaterEmissionVolume");
		return ptr;
	}

};


// Class Water.FFTWaterInterface
// 0x0000 (0x0028 - 0x0028)
class UFFTWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.FFTWaterInterface");
		return ptr;
	}


	void SetExtendedPlaneComponent(class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent);
	void SetComponent(class UFFTWaterComponent* InFFTWaterComponent);
	void SetActor(class AAthenaFFTWater* InFFTWaterActor);
	class UFFTWaterExtendedPlaneComponent* GetExtendedPlaneComponent();
	class UFFTWaterComponent* GetComponent();
	class AAthenaFFTWater* GetActor();
};


// Class Water.WaterProperties
// 0x0010 (0x0038 - 0x0028)
class UWaterProperties : public UObject
{
public:
	TArray<struct FWaterInformation>                   WaterInfo;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterProperties");
		return ptr;
	}

};


// Class Water.WaterInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterInterface");
		return ptr;
	}


	bool IsReadyToBeQueried();
	TEnumAsByte<EWaterQueryResult> GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, float ChoppynessScalar, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal);
	TEnumAsByte<EWaterQueryResult> GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals);
	TEnumAsByte<EWaterQueryResult> GetWaterInformation(const struct FVector& SamplePosition, class AActor* Actor, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal);
	TEnumAsByte<EWaterQueryResult> GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float ChoppynessScalar, float* Height);
	TEnumAsByte<EWaterQueryResult> GetWaterHeightsBatched(TArray<struct FVector2D> SamplePositions, class AActor* Actor, TArray<float>* Heights);
	TEnumAsByte<EWaterQueryResult> GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height);
	struct FWaterSimPlane GetActorWaterPlane(class AActor* Actor);
	struct FWaterInformation GetActorWaterInformation(class AActor* Actor);
};


// Class Water.FFTWaterService
// 0x0080 (0x0490 - 0x0410)
class AFFTWaterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	TWeakObjectPtr<class AAthenaFFTWater>              FFTWaterActor;                                            // 0x0420(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UFFTWaterComponent>           FFTWaterComponent;                                        // 0x0428(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UFFTWaterExtendedPlaneComponent> ExtendedPlaneComponent;                                   // 0x0430(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0438(0x0050) MISSED OFFSET
	double                                             ReplicatedServerCreationTime;                             // 0x0488(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.FFTWaterService");
		return ptr;
	}


	void OnRep_FFTWaterComponent();
	void OnRep_FFTWaterActor();
	void OnRep_ExtendedPlaneComponent();
};


// Class Water.FlatWaterPlaneComponent
// 0x0010 (0x0590 - 0x0580)
class UFlatWaterPlaneComponent : public UBaseWaterComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0580(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.FlatWaterPlaneComponent");
		return ptr;
	}


	void OnActorLeaveWaterPlane(class AActor* Actor);
	void OnActorEnterWaterPlane(class AActor* Actor);
	struct FVector2D ConvertToWaterSpace(const struct FVector& WorldSpacePosition);
};


// Class Water.MockWaterInterface
// 0x0010 (0x0038 - 0x0028)
class UMockWaterInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.MockWaterInterface");
		return ptr;
	}

};


// Class Water.MockWaterServiceWithValidWaterPlane
// 0x0008 (0x0040 - 0x0038)
class UMockWaterServiceWithValidWaterPlane : public UMockWaterInterface
{
public:
	class UFFTWaterComponent*                          DefaultWaterComponent;                                    // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.MockWaterServiceWithValidWaterPlane");
		return ptr;
	}

};


// Class Water.NoSwimWaterId
// 0x0000 (0x0028 - 0x0028)
class UNoSwimWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.NoSwimWaterId");
		return ptr;
	}

};


// Class Water.SeaWaterId
// 0x0000 (0x0028 - 0x0028)
class USeaWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.SeaWaterId");
		return ptr;
	}

};


// Class Water.ShipWaterId
// 0x0000 (0x0028 - 0x0028)
class UShipWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.ShipWaterId");
		return ptr;
	}

};


// Class Water.UndergroundSeaWaterId
// 0x0000 (0x0028 - 0x0028)
class UUndergroundSeaWaterId : public UWaterId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.UndergroundSeaWaterId");
		return ptr;
	}

};


// Class Water.WaterBuoyancyFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterBuoyancyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBuoyancyFunctionLibrary");
		return ptr;
	}


	float STATIC_TickBuoyancy(class AActor* InOwner, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar, struct FWaterBuoyancy* InWaterBuoyancy);
	void STATIC_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(float ZOffset, struct FWaterBuoyancy* InWaterBuoyancy);
	void STATIC_SetBuoyancyProbeCurveBlendDebugOverride(float UnaryBlendOverride, struct FWaterBuoyancy* InWaterBuoyancy);
	void STATIC_SetBuoyancyProbeCurveBlend(float Blend, TEnumAsByte<EBuoyancyBlend> BlendType, struct FWaterBuoyancy* InWaterBuoyancy);
};


// Class Water.WaterBuoyancySampleMovementFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterBuoyancySampleMovementFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterBuoyancySampleMovementFunctionLibrary");
		return ptr;
	}


	void STATIC_TickLocalSampleMovement(class AActor* InActor, float DeltaTime, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void STATIC_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void STATIC_StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, int ConfigurationIndex, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement);
	void STATIC_StartMovingVolumeSamplesLocally(class AActor* InActor, class UCurveVector* InCenterOfMassOffsetCurve, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, class UCurveFloat* ProbeMovementCurve, float MoveTime, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData);
};


// Class Water.WaterEmissionVolumeService
// 0x0020 (0x0048 - 0x0028)
class UWaterEmissionVolumeService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterEmissionVolumeService");
		return ptr;
	}

};


// Class Water.WaterExclusionSurfaceInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterExclusionSurfaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterExclusionSurfaceInterface");
		return ptr;
	}

};


// Class Water.WaterPlaneInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterPlaneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterPlaneInterface");
		return ptr;
	}

};


// Class Water.WaterInteractionComponent
// 0x0020 (0x05C0 - 0x05A0)
class UWaterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterInteractionComponent");
		return ptr;
	}


	void LeaveWaterPlane(class UBaseWaterComponent* WaterComponent);
	void LeaveWaterExclusionZone();
	bool IsUsingNonDefaultWaterPlane();
	bool IsInWaterExcludedZone();
	class UBaseWaterComponent* GetWaterPlaneComponent();
	unsigned char GetNumberOfWaterPlanes();
	void EnterWaterPlane(class UBaseWaterComponent* WaterComponent);
	void EnterWaterExclusionZone();
};


// Class Water.WaterPlaneExclusionComponent
// 0x0000 (0x00C8 - 0x00C8)
class UWaterPlaneExclusionComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterPlaneExclusionComponent");
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class Water.WaterPlaneRetrievalProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterPlaneRetrievalProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterPlaneRetrievalProviderInterface");
		return ptr;
	}

};


// Class Water.WaterSplashProbeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWaterSplashProbeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterSplashProbeFunctionLibrary");
		return ptr;
	}


	void STATIC_TickProbes(class AActor* InOwner, float InDeltaTime, TArray<struct FWaterSplashProbe>* InSplashProbes);
	void STATIC_TickProbe(class AActor* InOwner, float InDeltaTime, struct FWaterSplashProbe* InSplashProbe);
	void STATIC_SetSamplingTime(float SamplingTime, TArray<struct FWaterSplashProbe>* InSplashProbes);
	struct FVector STATIC_GetRelativeWaterHeightChangeSpd(int ProbeIndex, TArray<struct FWaterSplashProbe>* InSplashProbes);
};


// Class Water.WaterSpoutVFXComponent
// 0x0068 (0x0130 - 0x00C8)
class UWaterSpoutVFXComponent : public UActorComponent
{
public:
	TArray<struct FWaterSpout>                         WaterSpouts;                                              // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     SplashEffectPointBottomZ;                                 // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UObject*                                     SpoutParticleSystem;                                      // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SplashParticleSystem;                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaterSplashDelayMin;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterSplashDelayMax;                                      // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplashEffectVFXOffset;                                    // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<struct FWaterSpout>                         ActiveWaterSpouts;                                        // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterSpoutVFXComponent");
		return ptr;
	}


	void AddSplashVFXSpawnerWithLocation(struct FWaterSpout* WaterSplashLocator);
	void ActivateSplashVFXWithDelay();
};


// Class Water.WaterVolumeInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterVolumeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Water.WaterVolumeInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
