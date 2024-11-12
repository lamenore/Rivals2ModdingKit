#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResultsXpWidget.generated.h"

class IXpUpdateDisplayInterface;
class UXpUpdateDisplayInterface;
class UImage;
class UStoreItem;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UResultsXpWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumAnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationLengthEaseExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationEaseExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideImageBG;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ImageBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_LeftProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_RightProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ProgressBarGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ProgressBarBackdrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_LeftProgressBarOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_RightProgressBarOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ProgressBarGlowOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_MatchXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentLevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentXpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CapXpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreItem* BP_TrackItem;
    
public:
    UResultsXpWidget();

    UFUNCTION(BlueprintCallable)
    void StartXpUpdateAnimation();
    
    UFUNCTION(BlueprintCallable)
    void ResumeXpAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayLevelUpSound();
    
    UFUNCTION(BlueprintCallable)
    void PauseXpAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnCycledToFromBP();
    
    UFUNCTION(BlueprintCallable)
    void OnCycledAwayFromBP();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedFromBP(TScriptInterface<IXpUpdateDisplayInterface> InParent, int32 InPlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetParentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartedAnimating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinishedAnimating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Appear();
    
};

