#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResultsRankUpdateInfo.h"
#include "ResultsRankWidget.generated.h"

class UHorizontalBox;
class UImage;
class UResultsScreenWidget;
class UScaleBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UResultsRankWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResultsScreenWidget* ParentResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_RankScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_BonusScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_RankIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_RankNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_PrevEloText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DeltaEloText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_WinStreakBonusEloText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_NewEloText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_PlacementsScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_PlacementsHoriBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_PlacementCountText;
    
public:
    UResultsRankWidget();

    UFUNCTION(BlueprintCallable)
    void StartRankUpdateAnim();
    
    UFUNCTION(BlueprintCallable)
    void ResumeRankUpdateAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayRankUpSound();
    
    UFUNCTION(BlueprintCallable)
    void PauseRankUpdateAnim();
    
    UFUNCTION(BlueprintCallable)
    bool OnActivatedFromBP(UResultsScreenWidget* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessedPlacementUpdate(const FResultsRankUpdateInfo& RankInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWinStreakBonusReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartedAnimating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRankUp(const FResultsRankUpdateInfo& RankInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinishedAnimating();
    
};

