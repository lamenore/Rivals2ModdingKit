#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseScreenWidget.h"
#include "ArcadeModeGameOverWidget.generated.h"

class AActor;
class AGameOverRivalCapture;
class ALevelSequenceActor;
class ARespawnPlatformRenderer;
class ARivalsCharacterRenderer;
class UHorizontalBox;
class ULevelSequence;
class ULevelSequencePlayer;
class URivalsButtonWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UArcadeModeGameOverWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ContinueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ContinueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_GiveUpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_GiveUpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_TimeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameOverRivalCapture* RivalCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARespawnPlatformRenderer* PlatformRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterRenderer* RivalRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* FallingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* ContinueSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* GiveUpSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CharacterMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlatformMount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ToContinueAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ToGiveUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_PressedAnim;
    
    UArcadeModeGameOverWidget();

    UFUNCTION(BlueprintCallable)
    void TauntEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartFallEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetPlatformLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void ReloadStage();
    
    UFUNCTION(BlueprintCallable)
    void PlayGiveUpSequence();
    
    UFUNCTION(BlueprintCallable)
    void PlayFallSequence();
    
    UFUNCTION(BlueprintCallable)
    void PlayContinueSequence();
    
    UFUNCTION(BlueprintCallable)
    void PlatformHitEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnGiveUpReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGiveUpFocused(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnContinueReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnContinueFocused(const int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void IdleEvent();
    
    UFUNCTION(BlueprintCallable)
    void GetupEvent();
    
    UFUNCTION(BlueprintCallable)
    void GameOver();
    
    UFUNCTION(BlueprintCallable)
    void EndFadeEvent();
    
    UFUNCTION(BlueprintCallable)
    void Continue();
    
};

