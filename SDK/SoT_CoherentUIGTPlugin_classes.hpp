#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CoherentUIGTPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x0278 (0x0340 - 0x00C8)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                    // 0x0148(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0158(0x0048) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x01AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x01AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // 0x01C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x176];                                     // 0x01CA(0x0176) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent");
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const class FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0038 (0x0378 - 0x0340)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	class FString                                      URL;                                                      // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Width;                                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ManualTexture;                                            // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                               // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0361(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTComponent");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (0x00F8 - 0x00C8)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	class FString                                      LinkName;                                                 // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTLiveView");
		return ptr;
	}


	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* BaseComponent, const class FString& Name, int* Width, int* Height);
};


// Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView
// 0x0008 (0x0100 - 0x00F8)
class UCoherentUIGTRenderToTextureLiveView : public UCoherentUIGTLiveView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0050 (0x0460 - 0x0410)
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0410(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTSystem");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0090 (0x00B8 - 0x0028)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TArray<class UStruct*>                             StructTypes;                                              // 0x00A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTJSEvent");
		return ptr;
	}


	void AddText(const struct FText& Text);
	void AddStructArg(class UStructProperty* Arg);
	void AddString(const class FString& Str);
	void AddObject(class UObject* Object);
	void AddName(const struct FName& Name);
	void AddInt32(int integer);
	void AddFloat(float fl);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};


// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (0x0040 - 0x0028)
class UCoherentUIGTJSPayload : public UObject
{
public:
	class FString                                      EventName;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTJSPayload");
		return ptr;
	}


	void ReadObject(int Index, class UObject* Object);
	class FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
};


// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0028 (0x0368 - 0x0340)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	struct FStringAssetReference                       HUDMaterialName;                                          // 0x0340(0x0010) (ZeroConstructor)
	class UMaterial*                                   HUDMaterial;                                              // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTHUD");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const class FString& EventName, class UCoherentUIGTJSEvent* JSEvent);
	void STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings);
	class UCoherentUIGTJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const class FString& Arg);
	void STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};


// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0098 (0x05A0 - 0x0508)
class ACoherentUIGTGameHUD : public AHUD
{
public:
	class UCoherentUIGTHUD*                            CoherentUIGTHUD;                                          // 0x0508(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0510(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTGameHUD");
		return ptr;
	}


	void SetupUIGTView(const class FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
	bool HasSetupUIGTView();
};


// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0060 (0x0470 - 0x0410)
class ACoherentUIGTInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonDown;                  // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonUp;                    // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyDown;                          // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyUp;                            // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0450(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTInputActor");
		return ptr;
	}


	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
};


// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (0x0068 - 0x0028)
class UCoherentUIGTSettings : public UObject
{
public:
	bool                                               EnableLiveReload;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                InspectorPort;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                WebdriverPort;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableWebSecurity;                                        // 0x0034(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLocalization;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               RunAsynchronous;                                          // 0x0036(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRecursivelyBindUStructs;                                 // 0x0037(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LoadSystemFonts;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowPerformanceWarningsInEditor;                         // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECoherentUIGTSettingsSeverity>         LogSeverity;                                              // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPaintToBackBuffer;                                       // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectTitleSafeZone;                                    // 0x003D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectLetterboxing;                                     // 0x003E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	class FString                                      HUDMaterialName;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      CoUIResourcesRoot;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               TickWhileGameIsPaused;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECoherentUIGTMSAA>                     MSAA;                                                     // 0x0061(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTSettings");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x02D0 (0x0408 - 0x0138)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0138(0x0020) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x48];                                      // 0x01E0(0x0048) MISSED OFFSET
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGammaCorrectedMaterial;                                  // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              ExecuteJSTimersThresholdMs;                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1A3];                                     // 0x024D(0x01A3) MISSED OFFSET
	class FString                                      URL;                                                      // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0405(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CoherentUIGTPlugin.CoherentUIGTWidget");
		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCoherentUIGTJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Reload();
	void Redraw();
	void Load(const class FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	class UTextureRenderTarget2D* GetRenderTexture();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
