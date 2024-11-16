#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "ERivalsCurrencyType.h"
#include "ResultsPlayerBoxInfo.h"
#include "ResultsPlayerInfo.h"
#include "ResultsRankUpdateInfo.h"
#include "ResultsRewardInfo.h"
#include "ResultsXpUpdateInfo.h"
#include "RivalsMatchResult.h"
#include "RivalsPlayerTag.h"
#include "XpUpdateDisplayInterface.h"
#include "ResultsScreenWidget.generated.h"

class APlayerController;
class ARivalsPlayerEntity;
class UCanvasPanel;
class UMenuButtonWidget;
class UOnlineTimerWidget;
class UTwoButtonPopupWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UResultsScreenWidget : public UBaseScreenWidget, public IXpUpdateDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARivalsPlayerEntity*> PlayerEntities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultsPlayerInfo> PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultsXpUpdateInfo EventXpUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FResultsXpUpdateInfo> PlayerXpInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultsRewardInfo> RewardsToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultsRankUpdateInfo RankUpdateToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToForceReadyInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDelayMapTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBoxTop_Hide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LetterBoxBottom_Hide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineTimerWidget* BP_OnlineStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_SaveReplayButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_SaveReplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ReplaySaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShowOnlineTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestedManualReplaySave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTwoButtonPopupWidget* ForfeitPopup;
    
public:
    UResultsScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillSaveReplay() const;
    
    UFUNCTION(BlueprintCallable)
    void StartCoinSFX();
    
    UFUNCTION(BlueprintCallable)
    void ShowFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayXpForSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayRankUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayEventLevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoShowStats();
    
    UFUNCTION(BlueprintCallable)
    void RequestSaveReplay(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void QueueRewardForDisplay(const FResultsRewardInfo RewardInfo);
    
    UFUNCTION(BlueprintCallable)
    void ProcessXpUpdate(const FResultsXpUpdateInfo XpUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ProcessRankUpdate(const FResultsRankUpdateInfo RankUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ProcessNextReward();
    
    UFUNCTION(BlueprintCallable)
    void ProcessEventXpUpdate(const FResultsXpUpdateInfo XpUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerClickedNextRound(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerClickedBackToMatchmaking(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void PlayCoinTotalAppearSFX();
    
    UFUNCTION(BlueprintCallable)
    void MarkReadyForNextMatch(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void MarkNotReadyForNextMatch(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocalPlayerClickedNextRound(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocalPlayerClickedBackToMatchmaking(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerReady(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerCpu(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerActive(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastMatchInSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEveryoneReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FResultsXpUpdateInfo GetXpUpdateForSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IXpUpdateDisplayInterface> GetXpUpdateDisplayInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinsRequired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerWins(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSlotForPlayerController(APlayerController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FResultsPlayerBoxInfo GetPlayerResultsInfo(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRank(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRivalsMatchResult> GetPlayerMatchHistory(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FResultsRankUpdateInfo GetNextRankUpdate();
    
    UFUNCTION(BlueprintCallable)
    FRivalsPlayerTag GetCurrentPlayerTagInfo(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ForceReadyForNextMatch(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void EndCoinSFX();
    
    UFUNCTION(BlueprintCallable)
    void ClickedNextRound(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ClickedBackToMatchmaking(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessedRankUpdate(const FResultsRankUpdateInfo& RankUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessedPlayerXpUpdate(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessedEventXpUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusDefaultWidget(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisplayXpCoinReward(ERivalsCurrencyType CurrencyType, int32 DeltaCoins, int32 NewTotal, int32 BonusCoins);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CurrencyRewardProcessed(const ERivalsCurrencyType& CurrencyType, const int32& DeltaCurrency, const int32& NewCurrencyTotal);
    

    // Fix for true pure virtual functions not being implemented
};

