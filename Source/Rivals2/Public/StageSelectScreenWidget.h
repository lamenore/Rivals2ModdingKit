#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "ERivalsSessionState.h"
#include "StageBanInfo.h"
#include "StageSelectPlayerInfo.h"
#include "Templates/SubclassOf.h"
#include "StageSelectScreenWidget.generated.h"

class APlayerController;
class UHorizontalBox;
class UOnlineTimerWidget;
class UPanelWidget;
class URivalsStageData;
class URivalsStageSkinData;
class URockPaperScissorsWidget;
class UScaleBox;
class UStageButtonWidget;
class UTextBlock;
class UUIButtonDisplayer;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStageSelectScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URivalsStageData*> StageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStageButtonWidget*> StageButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URockPaperScissorsWidget> RPSWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStageButtonWidget> StageButtonInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageBanInfo BanInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTourneyModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URockPaperScissorsWidget* RPSWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_AlertPlayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AlertPlayerNumTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AlertActionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_AlertActionObjectTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIButtonDisplayer* BP_StageBanButtonMappingDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BP_StarterAlertBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_StarterScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_StartersVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BP_CounterpickAlertBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_CounterpickScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_CounterpickVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BP_CasualAlertBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_CasualScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_CasualVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BP_DevelopmentAlertBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_DevelopmentScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_DevelopmentVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageButtonWidget* BP_NewRandomStageButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineTimerWidget* BP_OnlineStateTimer;
    
public:
    UStageSelectScreenWidget();

    UFUNCTION(BlueprintCallable)
    void UpdatePreviewHackFunction(URivalsStageData* RivalsStageData, URivalsStageSkinData* RivalsStageSkinData, const bool bIsRandom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePreviewHack(URivalsStageData* RivalsStageData, URivalsStageSkinData* RivalsStageSkinData, const bool bIsRandom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoStrikeCounterPicks() const;
    
    UFUNCTION(BlueprintCallable)
    void SelectStage(URivalsStageData* InSelectedStageData, APlayerController* InPlayerController, int32 OriginalStageIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectRandomStage(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RequestBackToCSS(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopulateStageList();
    
    UFUNCTION(BlueprintCallable)
    void OnStageClicked(URivalsStageData* StageData, const int32& LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnStageBanRequested(URivalsStageData* SelectedStage, const int32& LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInitSessionState(ERivalsSessionState SessionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRPSOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitStageSelectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStageSelectPlayerInfo GetPlayerInfo(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void EnableStageStriking(const TArray<int32>& InPlayerSlots);
    
    UFUNCTION(BlueprintCallable)
    void CenterAllCursorsOnWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void BanStage(URivalsStageData* InSelectedStageData, int32 PlayerSlot);
    
};

