#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "FMODBlueprintStatics.h"
#include "InputCoreTypes.h"
#include "ESnapNetRenderInterpolationMethod.h"
#include "SnapNetSampleGameInstance.h"
#include "EDebugCameraMode.h"
#include "EDebuggingInfoMode.h"
#include "EGreenScreenType.h"
#include "EHudMode.h"
#include "EMenuSoundType.h"
#include "ERivalsSessionState.h"
#include "EShowBuildType.h"
#include "FrameAdvanceEventDelegate.h"
#include "GameplayAssetsLoadedDelegate.h"
#include "InputByPlayerDelegate.h"
#include "RivalsDebugDrawSettings.h"
#include "RivalsPlayerTag.h"
#include "SessionStateChangedDelegate.h"
#include "StageVisualsUpdateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RivalsGameInstance.generated.h"

class AActor;
class ACameraActor;
class ARivalsPlayerController;
class UBasePopupWidget;
class UFMODBank;
class UFMODBus;
class UMaterialInstance;
class UMaterialParameterCollection;
class URivalsArticleData;
class URivalsCameraShake;
class URivalsCharacterDefinition;
class URivalsMenuSoundContainer;
class URivalsReconnectMessage;
class URivalsSoundEffectContainer;
class URivalsStoryTargetBreakMap;
class URivalsUIManager;
class URivalsUserSettings;
class URivalsVfxDefinitionAsset;
class URivalsVictorySequenceData;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable, NonTransient, Config=Game)
class RIVALS2_API URivalsGameInstance : public USnapNetSampleGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GreenScreenColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MagentaScreenColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BlueScreenColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BlackScreenColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WhiteScreenColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsUIManager* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsUIManager> UIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsUserSettings> UserSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugCameraMode DebugCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsDebugDrawSettings DebugDrawSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapNetDebugging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebuggingInfoMode DebuggingInfoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudMode HudMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrameAdvancing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeCameraEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDollyCameraEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcadeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartLocalSessionAfterMapLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDedicatedServerAfterMapLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReconnecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrainingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeterministicRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBasePopupWidget> PostLoadDialogueToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStageSkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFMODEventInstance> MvpVictorySoundInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsVictorySequenceData* MvpVictorySequenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlayerTag> PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TempVfxActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingResultsScreenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasMatchJustCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasMatchJustForfeited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidLocalPlayerForfeit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsSessionState PreviousSessionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedPIEinGameplayLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MapTransitionDelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ReconnectTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle BootMovieDelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsReconnectMessage* ReconnectMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransitioningMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreakTheTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsStoryTargetBreakMap> TargetBreakMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* ActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsCameraShake> CameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBus*> GameplayBuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> UniversalBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> GameplayBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> EnvironmentBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CharacterOutlinePostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BlankKeyCapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UTexture2D*> GCCButtonTextureMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UTexture2D*> XBXButtonTextureMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UTexture2D*> KeyboardButtonTextureMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InvalidKeyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PostProcessMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastWrittenReplayFullPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastWrittenReplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LastWrittenReplayParticipantIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsMenuSoundContainer* MenuSoundContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsSoundEffectContainer* UniversalSfxContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsVfxDefinitionAsset* UniversalVfxContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageVisualsUpdate StageVisualsUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInStoryMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputByPlayer InputByPlayerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameAdvanceEvent FrameAdvanceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAssetsLoaded GameplayAssetsLoadedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedLoadingGameplayAssets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStateChanged SessionStateInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStateChanged OnMatchRestarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStateChanged OnStateLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateLastStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasViewedStartupSequence;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TapJumpDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TapStrongDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeselectCharactersAfterMatch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetCustomControlsAfterMatch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchSettingsLocked;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAllowTeams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableTourneyMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowFrameAdvance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoDetectMatchType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StockCount1v1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeSetting1v1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeSettingFFA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableSecretRoom;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBattleRoom;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChaseIntensity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOnlineColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* PausedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsArticleData> TargetArticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsArticleData> MovingTargetArticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShowBuildType ShowBuildType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VersionString;
    
    URivalsGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void WaitForShaderCompilation() const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleSnapNetDebugging();
    
    UFUNCTION(BlueprintCallable)
    void TogglePaused();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFrameAdvance(bool bIsFrameAdvance);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugDrawing();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCameraLocked();
    
    UFUNCTION(BlueprintCallable)
    void StartLocalSession(TSoftObjectPtr<UWorld> Map);
    
    UFUNCTION(BlueprintCallable)
    void StartGameplayMapLoad(const FName& LevelName, bool bIsServer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnBot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDrawTeamOutlines() const;
    
    UFUNCTION(BlueprintCallable)
    void ShakeCamera(const int32& GameplayFrame, const float& IntensityScale, const float& ShakeDuration, const float& FadeInPercentage, const float& FadeOutPercentage);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerTag(const FString& PlayerTagName, const int32& PlayerIndex, bool ForceSetToDefaultTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNextGreenScreenType(EGreenScreenType OverrideType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReconnecting(bool bInIsReconnecting);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDisplay(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHudMode(EHudMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldToPause(const bool& Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeCamera(bool FreeCameraEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDollyCamera(bool DollyCameraEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDeterministicRandom(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebuggingInfoMode(EDebuggingInfoMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDrawStageCollision(bool StageCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDrawHitboxes(bool HitboxesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDrawDi(bool DiLinesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCameraMode(EDebugCameraMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLocked(bool LockCamera);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendReadyToStartMatchMessage();
    
public:
    UFUNCTION(BlueprintCallable)
    bool SaveState(const int32 SaveStateIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SavePlayerTagWithSlotIndex(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SavePlayerTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SavePlayerTag(const FString& PlayerTagName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RumbleController(const int32& PlayerIndex, const float& Intensity, const float& Duration) const;
    
    UFUNCTION(BlueprintCallable)
    void RestartMatch();
    
    UFUNCTION(BlueprintCallable)
    void ReassignControllerPort(const int32& OldPortNum, const int32& NewPortNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PlayUniversalSFX(const FName& SoundName) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayReplayFromFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    FFMODEventInstance PlayMenuSoundWithHandle(EMenuSoundType MenuSoundType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayMenuSound(EMenuSoundType MenuSoundType, int32 FramePriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PlayCharSfx(const FName& SoundName, const URivalsCharacterDefinition* SkinDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    void OnResultsAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveCSSToMainMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAcceptedInvite();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadState(const int32 SaveStateIndex);
    
    UFUNCTION(BlueprintCallable)
    void LaunchDedicatedServer(TSoftObjectPtr<UWorld> Map);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingTrailerCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDeterministicRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnapNetDebugging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSinglePlayerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReconnecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRankedSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTagInUse(const FString& PlayerTagName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnMainPauseMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer(const int32& PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldToPauseEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeCameraEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrameAdvanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrameAdvanceAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDollyCameraEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArcadeMode() const;
    
    UFUNCTION(BlueprintCallable)
    void InitResultsScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsUIManager* GetUIManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsSessionState GetSessionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESnapNetRenderInterpolationMethod GetRenderInterpolationMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRivalsPlayerTag> GetNonTempPlayerTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsVictorySequenceData* GetMvpVictorySequenceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPredictionFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxDelayFramesBeforePrediction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHudMode GetHudMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebuggingInfoMode GetDebuggingInfoMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebugCameraMode GetDebugCameraMode() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentPlayerTagString(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentGreenScreenTypeString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllReplayFilenames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdditionalJitterBufferFrames() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecOssLogSessionInfo();
    
    UFUNCTION(BlueprintCallable)
    void EndSessionDirect(TSoftObjectPtr<UWorld> Map);
    
    UFUNCTION(BlueprintCallable)
    void EndSession(TSoftObjectPtr<UWorld> Map, TSoftClassPtr<UBasePopupWidget> NextDialogueToOpen);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteTag(const FString& PlayerTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeleteReplay(const FString& ReplayName) const;
    
    UFUNCTION(BlueprintCallable)
    void ContinueLocalSession(TSoftObjectPtr<UWorld> Map);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPause() const;
    
    UFUNCTION(BlueprintCallable)
    void AdvanceFrame();
    
    UFUNCTION(BlueprintCallable)
    bool AddPlayerTag(const FString& PlayerTagName);
    
};

