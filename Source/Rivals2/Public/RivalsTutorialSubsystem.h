#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsBufferedInputAction.h"
#include "ERivalsTutorialDifficulty.h"
#include "ERivalsTutorialType.h"
#include "RivalsTutorialSubsystem.generated.h"

class AOrby;
class ARivalsDialogueQueue;
class ARivalsDialogueTrigger;
class ARivalsOrbySpawn;
class ARivalsSpikeSpawn;
class ATutorialCheckpoint;
class UMatchHUDWidget;
class UObject;
class UOrbyChargeBar;
class URivalsDialogueGroup;
class URivalsTutorialSubsystem;
class UTutorialHUD;
class UTutorialSaveGame;

UCLASS(Blueprintable)
class RIVALS2_API URivalsTutorialSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LastCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOrby* Orby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrbyChargeBar* OrbyChargeBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTutorialHUD* TutorialHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKilledByTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDoAirdodgeAttack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsTutorialDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsTutorialType CurrentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreviousStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActionSuccessCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxActionSuccesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentDialogueIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ARivalsDialogueTrigger*> DialogueTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsDialogueQueue* DialogueQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ATutorialCheckpoint*> Checkpoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDialogueShouldEndLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDialogeShouldMoveOrby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AfterDialogueOrbyPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrevFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFacingDirection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingToStartTutorial;
    
public:
    URivalsTutorialSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateOffense();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDialogueTriggers();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDefense();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCheckpoints();
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionText();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAllActions();
    
    UFUNCTION(BlueprintCallable)
    void StartTutorialLevel();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSpike(ARivalsSpikeSpawn* SpikeSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SpawnOrby(ARivalsOrbySpawn* OrbySpawn);
    
    UFUNCTION(BlueprintCallable)
    void ShowDialogue(URivalsDialogueGroup* Dialogue, bool bShowChar);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelType(ERivalsTutorialType LevelType);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDWidget(UTutorialHUD* TutorialHUDWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ERivalsTutorialDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetActionLockedForPlayer(ERivalsBufferedInputAction Action, bool bIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SaveProgress();
    
    UFUNCTION(BlueprintCallable)
    void ResetLevel();
    
    UFUNCTION(BlueprintCallable)
    void PlayTaunt();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialStageChange();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStart();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnFacingDirChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnActionFailed();
    
    UFUNCTION(BlueprintCallable)
    void LockAllActions();
    
    UFUNCTION(BlueprintCallable)
    void LoadTutorialLevel(ERivalsTutorialDifficulty Difficulty, ERivalsTutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable)
    UTutorialSaveGame* LoadProgress();
    
    UFUNCTION(BlueprintCallable)
    void KillPlayer();
    
    UFUNCTION(BlueprintCallable)
    void InitTutorial();
    
    UFUNCTION(BlueprintCallable)
    void IncrementActionSuccesses();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UMatchHUDWidget* GetMatchHUDWidget(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsTutorialType GetLevelType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsTutorialDifficulty GetDifficulty();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetActionSuccesses();
    
    UFUNCTION(BlueprintCallable)
    FText GetActionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsTutorialSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EndLevel();
    
    UFUNCTION(BlueprintCallable)
    void CompleteTutorial();
    
    UFUNCTION(BlueprintCallable)
    void CloseShutter();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceTutorialStage();
    
};

