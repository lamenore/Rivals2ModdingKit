#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EEdgeguardHeight.h"
#include "ERivalsCpuPlaybackMode.h"
#include "ERivalsFacingDirection.h"
#include "ERivalsSessionState.h"
#include "ETrainingGameMode.h"
#include "ETrainingSublevel.h"
#include "PlaybackSequence.h"
#include "TrainingSubsystem.generated.h"

class AActor;
class ARivalsGameStateEntity;
class UInputHistoryWidget;
class URivalsStageData;
class UTrainingModeUIBase;
class UTrainingSaveGame;

UCLASS(Blueprintable)
class RIVALS2_API UTrainingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LastEyeSpawnPos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsFacingDirection EdgeguardSpawnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEdgeguardHeight EdgeguardHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EdgeguardPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EdgeguardCpuDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCpuWasEdgeguarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCpuDiedNormally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CpuKillFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EdgeguardRespawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecordingInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRestoreCpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRestorePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRecordingFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordingStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRecordingSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayerIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CpuRecordingIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CpuPlaybackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CpuRecordingStartPos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsFacingDirection CpuRecordingFacingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsCpuPlaybackMode CpuPlaybackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaybackSequence> PlaybackSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaybackSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrainingGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGridVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGeometryVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrevTrainingStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrainingSaveGame* TrainingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingModeUIBase* BaseUIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputHistoryWidget* InputHistoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStageLoadInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrainingGameMode CurrentTrainingGame;
    
public:
    UTrainingSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartEyebreakStage();
    
    UFUNCTION(BlueprintCallable)
    void SpawnRandomEye();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEye(FVector2D Location);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEdgeguardCPU(ERivalsFacingDirection FacingDirection);
    
    UFUNCTION(BlueprintCallable)
    void ShowTraining();
    
    UFUNCTION(BlueprintCallable)
    void ShowStage();
    
    UFUNCTION(BlueprintCallable)
    void ShowEnvironment();
    
    UFUNCTION(BlueprintCallable)
    void SetupTrainingPlatforms(FName StageName);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingStage(FName StageName);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingPlatformsVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingGridVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingGameMode(ETrainingGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgeguardHeight(EEdgeguardHeight Height);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgeguardDir(ERivalsFacingDirection Dir);
    
    UFUNCTION(BlueprintCallable)
    void QueueForMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void OpenTrainingMode();
    
    UFUNCTION(BlueprintCallable)
    void OnStageHidden();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchRestarted(ERivalsSessionState SessionState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchFound();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLeaveTrainingMode();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveCSS();
    
    UFUNCTION(BlueprintCallable)
    void LoadTrainingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingGridVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingGeometryVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEyeBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeguard();
    
    UFUNCTION(BlueprintCallable)
    void InitTrainingStage();
    
    UFUNCTION(BlueprintCallable)
    void InitTrainingMode();
    
    UFUNCTION(BlueprintCallable)
    void InitTrainingGame(ETrainingGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    void InitEyeBreak();
    
    UFUNCTION(BlueprintCallable)
    void InitEdgeguard();
    
    UFUNCTION(BlueprintCallable)
    void IncrementSuccesses();
    
    UFUNCTION(BlueprintCallable)
    void HideTraining();
    
    UFUNCTION(BlueprintCallable)
    void HideStage();
    
    UFUNCTION(BlueprintCallable)
    void HideEnvironment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETrainingGameMode GetTrainingGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSuccessCount();
    
    UFUNCTION()
    FName GetSublevelName(FName StageName, ETrainingSublevel SublevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputHistoryWidget* GetInputHistoryWidget();
    
    UFUNCTION(BlueprintCallable)
    ARivalsGameStateEntity* GetGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayFrame();
    
    UFUNCTION(BlueprintCallable)
    URivalsStageData* GetCurrentStageData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrainingModeUIBase* GetBaseUIWidget();
    
    UFUNCTION(BlueprintCallable)
    void GameplayTick();
    
};

