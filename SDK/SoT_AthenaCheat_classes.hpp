#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaCheat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaCheat.AthenaCheatManager
// 0x0078 (0x00F0 - 0x0078)
class UAthenaCheatManager : public UCheatManager
{
public:
	class ACinematicCameraController*                  CinematicCameraController;                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CinematicCameraControllerClass;                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0088(0x0028) MISSED OFFSET
	TArray<struct FWorldMarkerDesc>                    CreatedWorldMarkers;                                      // 0x00B0(0x0010) (ZeroConstructor, Transient)
	class UGameEventSchedulerSettingsAsset*            DebugSchedulerSettings;                                   // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TeleportToDigsiteHeightOffset;                            // 0x00C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AthenaCheat.AthenaCheatManager");
		return ptr;
	}


	void WindTriggerChange(int ChangeInstantly);
	void WindSetVector(float X, float Y);
	void WindSetMagnitude(float Magnitude);
	void WindSetDirection(float X, float Y);
	void WindReloadParams();
	void WindPrintDirection();
	void WindEnableDebug();
	void WindDisableDebug();
	void WindAlignWithCamera();
	void Walk();
	void VomitWithType(const struct FName& VomitType, float Duration);
	void Vomit();
	void UnlockAllEntitlements(int TrueFalse);
	void UnlockAllEmblemsAndAchievements();
	void UnBreakLeg();
	void TutorialAction(const class FString& ActionTypeString);
	void TriggerRewardNotification(struct FName* Identifier);
	void TriggerLandmarkReaction(int ActionType);
	void TriggerFogManagerAtNearestIsland();
	void TriggerEmblemUnlockedMessage(const class FString& EmblemFriendlyName);
	void TriggerControllerConnectionChange(bool IsConnect, int UserId, int ControllerId);
	void TriggerContestMatchmakingMigration();
	void TriggerContestBannerUnfurl();
	void TriggerAIShipTimerBattle();
	void TriggerAIShipPassive();
	void TriggerAIShipEncounter();
	void TriggerAIShipAggressive();
	void ToggleVideprinter(const class FString& Id);
	void ToggleThirdPerson();
	void ToggleNearestSuperheatedWater();
	void ToggleNearestLava();
	void ToggleMigrationPointOfInterestChecks(bool Enabled);
	void ToggleFastShipControls();
	void ToggleDrawShipSpeed();
	void ToggleDisplayCannonAISpawnerZones();
	void ToggleDebugFlying();
	void ToggleDeathCamera();
	void ToggleDamageAllowedToPlayerShip();
	void ToggleContestScoreDebug();
	void ToggleCinematicCamera();
	void ToggleAttributeOverride();
	void TestCrashDumpCreationOnRunnableThread();
	void TestCrashDumpCreationOnMainThread();
	void TeleportToShip();
	void TeleportToPlayerStart();
	void TeleportToNearestTreasureLocation();
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ);
	void TeleportToHideout();
	void TeleportToAggressiveGhostShipEncounter();
	void TeleportShip(float X, float Y, float Z);
	void TeleportPlayerToSafety();
	void TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime);
	void TeleportPlayerToKraken();
	void TeleportPlayersCrewShipToPlayerLocation();
	void TeleportOutOfHideout();
	void TeleportCrewToShip(const class FString& CrewId);
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(const class FString& ActorIdString, const class FString& CrewId);
	void TeleportCrewToSafeSpawnLocation(const class FString& CrewId);
	void TeleportCrewMemberToShip(const class FString& ActorIdString);
	void TeleportAllPlayersToShip();
	void TeleportAllPlayersToPlayerStart();
	void TeleportAllCrewsToShips();
	void TeleportAllCrewsToCrewSpawnLocations();
	void TeleportActorToTrackedActorType(const class FString& ActorIdString, int DestinationActorType);
	void TeleportActorToTeleportLocationActor(const class FString& ControllerActorIdString, const class FString& TeleportLocationActorIdString);
	void TeleportActorToLocation(const class FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw);
	void TeleportActorToIsland(const class FString& ActorIdString, const class FString& IslandName);
	void TeleportActorToDigSite(const class FString& ActorIdString);
	void TeleportActorToActorWithOffset(const class FString& ActorIdString, const class FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ);
	void SuperSailor();
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw);
	void StopShip();
	void StopPetHangout();
	void StopAllPetsHangout();
	void StartVoyage(const class FString& SourceAssetName, bool Development);
	void StartSicknessOnPlayer();
	void StartSelectedRomeVoyage(const class FString& RomeVoyageString);
	void StartNearestVolcano();
	void StartNearestGeysers();
	void StartNearestEarthquake();
	void StartDemoSession();
	void StartCargoRunFromNearestNPC(int NumOfCrates);
	void StartAshenLordGeysers();
	void StartAllVolcanos();
	void StartAllCrewVoyages();
	void SpinShip(float YawSpdInDegreesPerSecond);
	void SpawnWatercraft(const class FString& WatercraftClassString);
	void SpawnTreasureChestOfType(class FString* ChestTypeString);
	void SpawnTreasureArtifact(const class FString& TypeString);
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int PartIndex);
	void SpawnTinySharkAtCurrentLocation(int ControllerParamIndex, int PartIndex);
	void SpawnStrongholdKey();
	void SpawnStandardStrongholdKey();
	void SpawnSmallShipAtIsland(const class FString& IslandName);
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnSkeletonAtNearestAISpawnPoint();
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, const class FString& TypeString);
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, const class FString& TypeString);
	void SpawnShipFromDesc(const class FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnShipAtIsland(const class FString& IslandName);
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnRomeTreasureChestOfType(const class FString& ChestTypeString);
	void SpawnNumberOfAI(const class FString& AIDescString, int NumToSpawn);
	void SpawnNightmareAggressiveGhostShipEncountersRandom();
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer();
	void SpawnMultipleTreasureChestsOfType(int Num, class FString* ChestTypeString);
	void SpawnMessageInABottle(const class FString& MessageInABottleTypeString);
	void SpawnMermaid();
	void SpawnMerchantFauna(const class FString& FaunaTypeString);
	void SpawnMerchantCrate(const class FString& MerchantCrateTypeString);
	void SpawnMerchantCargo(const class FString& MerchantCargoTypeString);
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles);
	void SpawnKrakenAtCurrentLocation();
	void SpawnItemOnFloor(const class FString& ItemString);
	void SpawnItemInHand(const class FString& ItemString);
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy);
	void SpawnGeyserAtPlayerLocation();
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy);
	void SpawnFortOfTheDammedStrongholdKey();
	void SpawnFogAtPlayerPosition();
	void SpawnFishAtPlayerLocation(const class FString& InBaitType);
	void SpawnCursedCannonball(const class FString& CannonballTypeString);
	void SpawnCollectorsChestOfType(class FString* ChestTypeString);
	void SpawnCargoRunCrate(const class FString& SpawnCargoRunCrateString);
	void SpawnBountyReward(const class FString& BountyTypeString);
	void SpawnBarrelGroup(bool ForcedCloseSpawn);
	void SpawnAThousandTreasureChests();
	void SpawnAndEquipDebugWieldable(const class FString& DebugWieldableTypeString);
	void SpawnAINoTrigger(const class FString& AIDescString);
	void SpawnAIEncounter(const class FString& AIEncounterString);
	void SpawnAIAtNearestAISpawnPoint(const class FString& AIDescString);
	void SpawnAIAtLocationDelayed(const class FString& AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay);
	void SpawnAIAtCurrentLocationDelayed(const class FString& AIDescString, float Delay);
	void SpawnAI(const class FString& AIDescString);
	void SpawnAggressiveGhostShipEncounter();
	void SmoulderClosestShipFire();
	void SmoulderAllShipFires();
	void SlowMotionOverride(bool InValue);
	void SkipToEndOfOnboarding();
	void SinkShipWithKeelOverIndex(int KeelOverConfigIndex);
	void SinkShipByActorId(const class FString& ShipActorIdString);
	void SinkShip();
	void SinkClosestItemProxy();
	void SinkAllBarrels();
	void SinkAllAIShips();
	void SingleStickRight();
	void SingleStickOff();
	void SingleStickLeft();
	void SimulatePetReactRequest(const class FString& Id);
	void SimulatePetReactCancellation(const class FString& Id);
	void ShowTavernBanners();
	void ShowTaleDebug();
	void ShowRandomCrewMemberGamerCard();
	void ShowEmissaryVoteIndicators();
	void ShowAllWelds();
	void ShowAllRomeBeacons();
	void ShowAllItemsInRadialInventory();
	void ShowAllianceStatus(const class FString& CrewId);
	void ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ);
	void ShipwrecksRegen();
	void ShipUpdateMassProperies();
	void SetWheelAngle(float Angle);
	void SetWeaponsLockedOut(bool WeaponsLockedOut);
	void SetWaveFlag(int InFlag);
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed);
	void SetVoiceChatEndpointXAudio2();
	void SetVoiceChatEndpointWwise();
	void SetUnattenuatedChatMixingMethodToUseWwise();
	void SetUnattenuatedChatMixingMethodToUsePlatform();
	void SetTinySharkToOneHealth();
	void SetTimeScalar(float TimeScalar);
	void SetTimeHoursAndMinutes(int Hours, int Minutes);
	void SetTime(int Hours);
	void SetShroudbreakerActive(bool bActive);
	void SetShipYaw(float Yaw);
	void SetShipWheelFullyRepaired();
	void SetShipWheelFullyDamaged();
	void SetShipRoll(float Roll);
	void SetShipFullyDamaged();
	void SetShipCapstanFullyRepaired();
	void SetShipCapstanFullyDamaged();
	void SetShipBuoyancyBlend(float UnaryBlend);
	void SetSailLoweredProportions(float Proportion);
	void SetSailAngles(float Angle);
	void SetPreventLeakingOnAllShips();
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking);
	void SetPlayerVisibleToAI();
	void SetPlayerInvisibleToAI();
	void SetPhotoMode(bool Enabled);
	void SetPetMovementTimeWindow(float TimeWindow);
	void SetNonCrewChatSpatialisation(bool Enabled);
	void SetMaxNumOfSpawnedAI(int MaxNumOfSpawnedActors);
	void SetMaxMovingPetsOnShips(int MaxMovingPets);
	void SetMaxMovingPetsOnServer(int MaxMovingPets);
	void SetMaxMovingPetsOnLand(int MaxMovingPets);
	void SetMastsFullyRepaired();
	void SetMastsFullyDamaged();
	void SetKnockbackDisabled(bool Disabled);
	void SetIdleDisconnectEnabled(bool Enabled);
	void SetHealthInfoReplicateOverride(bool bActive);
	void SetGrogSecondary(bool InValue);
	void SetGodMode(bool GodModeOn);
	void SetFOV(float InNewFOV);
	void SetFlameOfFateColour(int InFlameOfFateType);
	void SetDebugItemSource(const class FString& Source);
	void SetDebugHealthStage(int InStage);
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel);
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer);
	void SetDamageAllowedToPlayerShip(bool InAllowDamage);
	void SetCurrentCulture(const class FString& Culture);
	void SetCapstanPosition(float Position);
	void SetAxisBinding(const class FString& InBindingName, const class FString& InKeyName);
	void SetAITeamAttitude(const class FString& TeamAString, const class FString& TeamBString, const class FString& AttitudeString);
	void SetAIExclusiveAbility(const class FString& AIAbilityString);
	void SetAIAbilityTimeMultiplier(const class FString& AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier);
	void SetAbilityAlwaysOn(const class FString& AIAbilityString);
	void SendUpdateVoyageProgressEvent();
	void SendStatEvent(uint32_t StatId, uint64_t StatValue);
	void SendRewardRequestEvent(const class FString& CompanyNameAndRewardIdSeparatedByColon);
	void SendResetReaperLevelEvent();
	void ScuttleShip();
	void ScreenFadeStart();
	void ScreenFadeEnd();
	void SchedulerToggleDebugDraw();
	void SchedulerSkipToNext();
	void SchedulerInitTinyShark();
	void SchedulerInitSkellyFort();
	void SchedulerInitKraken();
	void SchedulerInitDefault();
	void SchedulerInitAshenLord();
	void SchedulerInitAIShipPassive();
	void SchedulerInitAIShipBattle();
	void SchedulerInitAIShipAggro();
	void SchedulerInitAggroGhostShip();
	void SchedulerAdvance(float Time);
	void SailShip();
	void RewindPhysicsSceneBy(float SecondsToRewindBy);
	void ReviveLocalPlayerInstantly();
	void ReviveLocalPlayerAccordingToReviveTime();
	void ReviveAllPlayerCharactersAccordingToReviveTime();
	void ResurfaceShipByActorId(const class FString& ShipActorIdString);
	void RestoreAndRestockShipAndPlayer();
	void RestockIslandBarrels();
	void RestockAllReplenishables();
	void RespawnAllIslandItemSpawners();
	void ResetTinySharkSpawnTimerWithTime(float Timer);
	void ResetTinySharkSpawnTimer();
	void ResetStats();
	void ResetMouseDelta();
	void ResetMaxNumOfSpawnedAI();
	void ResetMaxMovingPetsOnServerToDefault();
	void ResetDemoSession(bool StartNewSession);
	void ResetAllMechanisms();
	void ResetAITeamAttitudes();
	void ResetAIExclusiveAbilities();
	void ResetAbilityAlwaysOn();
	void RequestSmallPassiveAIShip();
	void RequestSmallAggressiveAIShip();
	void RequestLargePassiveAIShip();
	void RequestLargeAggressiveAIShip();
	void ReplenishShipWithDebugSpawner();
	void ReplenishShip();
	void ReplaceShipWithSmallShip(const class FString& ShipActorIdConsoleString);
	void RepairShipAndClearInternalWater();
	void RenameTreasure(const class FString& InVendorName);
	void RemovePetsFromAllPlayers();
	void RemovePetFromPlayer();
	void RemoveItemInSlot(int SlotIndex);
	void RemoveDebugPetSpawners();
	void RemoveDebugHealthStage();
	void RemoveAllFog();
	void RemoveAISpawnContext(const class FString& ContextName);
	void RebuildPirateFromSeed(int Seed);
	void ReallyScrambleMyGamertag();
	void PushShip(float FwdSpdInMetersPerSecond);
	void PullLatestEmblemProgress();
	void ProceedToNextContestState();
	void PrintTime();
	void PrintNPCs();
	void PrintAllNetworkActors();
	void PrintAISpawners();
	void PrintAISpawnContexts();
	void PlayerAnimationOverride(const struct FName& Name);
	void OverrideShipPartFromCatalogue(const class FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex);
	void OpenSkeletonFortDoor();
	void MoveStormToPlayer();
	void MessageBoxOnGraphicsThreadTest();
	void MakeSharksBrainDead();
	void MakeDebugPetSpawner();
	void LogShipHierarchy();
	void LogServerShipHierarchy();
	void LogAITeamAttitudes();
	void LocallyUnBreakLeg();
	void LocallyDisableTutorial();
	void LightLocalBraziers();
	void LightBraziersInRadius(float Radius);
	void LeaveAlliance(const class FString& CrewId);
	void LaunchPlayer(float Velocity, float Angle);
	void KrakenSetTentaclesToOneHealth();
	void KrakenAnimatedTentacleThrowPlayer();
	void KrakenAnimatedTentacleTakeDamage(float Damage);
	void KrakenAnimatedTentacleSwallowPlayer();
	void KrakenAnimatedTentacleSuckPlayer();
	void KrakenAnimatedTentaclePowerSlamPlayer();
	void KrakenAnimatedTentacleKill();
	void KrakenAnimatedTentacleIngestPlayer();
	void KrakenAnimatedTentacleDropPlayer();
	void KrakenAnimatedTentacleDespawn();
	void KrakenAnimatedTentacleDefeat();
	void KrakenAnimatedTentacleChangePlayerHoldState(const class FString& HoldState);
	void KindleClosestShip();
	void KindleAllShipFires();
	void KillPlayer();
	void KillCrew(const class FString& CrewId);
	void KillAllSkeletons();
	void KillAllPlayers();
	void KillAllOtherPlayers();
	void KillAllOtherPlayerCharacters();
	void KillAllDebugAISpawners();
	void KillAllCrews();
	void KillAllAggressiveGhostShips();
	void KillAllAggressiveGhostShipEncounters();
	void JoinAlliance(const class FString& OfferingCrew, const class FString& AcceptingCrew);
	void IPGOverride(const struct FName& BodyShape, float Distance);
	void IPGLoadWithoutClothing(const class FString& ActorIdString, const class FString& path);
	void IPGLoadWithClothing(const class FString& ActorIdString, const class FString& path);
	void IPGLoad(const class FString& path);
	void InvincibleEverything();
	void InterruptSicknessOnPlayer();
	void InfiniteGunAmmo(bool Enabled);
	void IncrementTime(int Hours, int Minutes);
	void IncrementDebugHealthStage();
	void IncreaseEmissaryCount(int Amount);
	void IgniteShipAtPlayerLocation();
	void IgniteLocalPlayer();
	void IgniteClosestShip();
	void IgniteAllShipFires();
	void HideTaleDebug();
	void HideEmissaryVoteIndicators();
	void HideAllRomeBeacons();
	void HealthSet(float Value);
	void HealthReset();
	void HealthRegenResetToEmpty();
	void HealthRegenAdd(float Value);
	void HealthContinuousStopWithTestReason();
	void HealthContinuousStopWithReason(const class FString& Reason);
	void HealthContinuousStartWithTestReason(float Value);
	void HealthContinuousStartWithReason(float Value, const class FString& Reason);
	void HealthAdjust(float Amount);
	void God();
	void ForceStopAllPetsDanger();
	void ForceStartAllPetsDangerWithChangingThreatLocation(const class FString& ResponseType, float UpdateThreatLocationTime);
	void ForceStartAllPetsDanger(const class FString& ResponseType);
	void ForcePetHangout(const struct FName& HangoutName, int PositionIndex);
	void ForceOpenShop();
	void ForceMigrationServiceHeartBeat();
	void ForceEmote(const struct FName& EmoteIdentifier);
	void ForceCloseShop();
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(const class FString& ResponseType, float UpdateThreatLocationTime);
	void ForceAllPetsDangerWithNoiseEvent(const class FString& ResponseType);
	void ForceAggressiveGhostShipPortalJump();
	void Fly();
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int KeelOverConfigIndex);
	void FloodShip(float NormalisedWaterAmount);
	void FireCreatorCrewSignedUpStat();
	void FireCreatorCrewMinutesViewedStat(int InNumMinutes);
	void FireCreatorCrewMinutesStreamedStat(int InNumMinutes);
	void FireCreatorCrewCurrentViewersStat(int InNumViewers);
	void FindText(const class FString& Namespace, const class FString& Key);
	void FakeMigrateBountyQuests();
	void EquipPirateTitle(const class FString& PirateTitleType);
	void EquipCompassInLoadout();
	void EndDemoSession();
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled);
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled);
	void EnableVengeance();
	void EnableNTP(bool Enable);
	void EnableMermaidSpawning(int Enable);
	void EnableMermaidDeletion(int Enable);
	void EnableHeadphoneMixing(bool Enabled);
	void EnableCinematicCamera();
	void EnableBeaconOnAllMermaids(int Enable);
	void EnableAIBehaviour();
	void DrawVideprinter(const class FString& Id, bool Active);
	void DrawTreasureDebug(int Enabled);
	void DrawTemporaryLandmarkDebug(bool Enabled);
	void DrawNearbyAISpawnPointsRanged(float Range);
	void DrawNearbyAISpawnPoints();
	void DownPlayer();
	void DownAllPlayers();
	void DownAllOtherPlayers();
	void DownAllOtherPlayerCharacters();
	void DouseClosestShip();
	void DouseAllShipFires();
	void DiveShipByActorId(const class FString& ShipActorIdString);
	void DisplaySingleEmblemProgress(const class FString& StatName);
	void DisplayServersideHitsAtPlayerPosWithDefaults();
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight);
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled);
	void DisplayLoadingScreenTeleport();
	void DisplayLoadingScreenBoot();
	void DisplayLoadingScreenArena();
	void DisplayLoadingScreenAdventure();
	void DisplayLandmarkValidTreasureLocationsForPlayer();
	void DisplayLandmarkRegions();
	void DisplayLandmarkNames();
	void DisplayFallDamageDebug(int Enable);
	void DisplayDrunkenness(bool Flag);
	void DisableCinematicCamera();
	void DisableAIBehaviour();
	void DioramaStartNearest(const class FString& Spawner, const class FString& DioramaDesc);
	void DioramaStart(const class FString& ActorName, const class FString& Spawner, const class FString& DioramaDesc);
	void DioramaKillAllDebug();
	void DestroyShip(const class FString& ShipActorIdConsoleString);
	void DestroyNearestDebugReapersChestMarker();
	void DestroyMyShip();
	void DestroyKraken();
	void DestroyAllTreasureChests();
	void DestroyAllTinySharks();
	void DestroyAllShips();
	void DespawnNumberOfAI(const class FString& AITypeString, int NumToDespawn);
	void DespawnFirstAI();
	void DespawnAI(const class FString& AITypeString);
	void DeleteVoyageHistory();
	void DeleteAllMermaids();
	void DecrementDebugHealthStage();
	void DebugIslandDelta();
	void DeactivateSkellyFortOfTheDamned(const class FString& FortName);
	void DeactivateSkellyFort(const class FString& FortName);
	void DeactivateEmissaryFlagCompany();
	void DeactivateDeathEffect();
	void DamageShipFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamageShip(float Strength);
	void DamagePlayerFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamagePlayer(float Strength);
	void CureAllAilings();
	void CreateDebugReapersChestMarkerAtPlayerLocation();
	void CreateDebugAISpawnerAt(const class FString& SpawnerAssetName, const class FString& LocationActorName);
	void CreateDebugAISpawner(const class FString& SpawnerAssetName);
	void ContextualPromptCountersToggleDebugDraw();
	void CompleteVoyage();
	void CompleteAllActivePuzzleVaults();
	void CompleteActiveQuests();
	void CloseSkeletonFortDoor();
	void CloseLoadingScreen();
	void ClearVoiceChatMeters();
	void ClearSlowMotionOverride();
	void ClearShipRestockingTimeouts();
	void ClearGrogSecondary();
	void ClearDebugStormLocation();
	void ClearAxisBinding(const class FString& InBindingName);
	void ClearAllItemsInInventory();
	void ClearAIAbilityTimeMultipliers();
	void CheckLandmarkValidTreasureLocationsAtPlayerPos();
	void CheckLandmarkRelativeToIslandCalculation();
	void CapsizeShip();
	void CancelVoyage();
	void CancelTale();
	void CancelEmergentVoyages();
	void CancelAllCrewVoyages();
	void CancelActiveAIShipEncounters();
	void BuryItem(const class FString& NameOfItemToBury);
	void BreakLeg();
	void BlockMigrationForPlayer(bool Enabled);
	void ApplyVenomWithParams(float InitialDamage, float DamagePerSecond, float DamageOverTimeDuration);
	void ApplyVenom();
	void ApplyStatusToPlayer(const class FString& StatusIdentifier, float Duration);
	void ApplyDamageToAllDamageZones(float Damage);
	void ApplyCursedCannonballStatusToShip(const class FString& CannonballTypeString);
	void ApplyCursedCannonballStatusToPlayer(const class FString& CannonballTypeString);
	void AllowTeleportWithItems(bool CanTeleport);
	void AllJoinAlliance();
	void AIPlayerShip();
	void AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration);
	void AddShipToCrew(const class FString& ActorIdString, const class FString& CrewId);
	void AddRandomPetForAllPlayers();
	void AddPlayerToCrew(const class FString& ActorIdString, const class FString& CrewId);
	void AddPetForPlayer(int PetTypeIndex, int PetPartIndex);
	void AddPetForAllPlayers(int PetTypeIndex, int PetPartIndex);
	void AddDrunkenness(int DrunkennessType, float DrunkennessChange);
	void AddAISpawnContext(const class FString& ContextName);
	void ActivateSkellyFortOfTheDamned(const class FString& FortName);
	void ActivateSkellyFort(const class FString& FortName);
	void ActivateEmissaryFlagCompany(const class FString& CompanyId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
