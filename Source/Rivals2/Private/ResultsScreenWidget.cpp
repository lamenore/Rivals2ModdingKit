#include "ResultsScreenWidget.h"

UResultsScreenWidget::UResultsScreenWidget() {
    this->TimeToForceReadyInSeconds = 1.50f;
    this->TimeToDelayMapTransition = 0.50f;
    this->BP_LetterBoxTop_Hide = NULL;
    this->BP_LetterBoxBottom_Hide = NULL;
    this->BP_OnlineStateTimer = NULL;
    this->BP_ReportServerButtonContainer = NULL;
    this->BP_ReportServerButton = NULL;
    this->BP_ServerReported = NULL;
    this->BP_SaveReplayButtonContainer = NULL;
    this->BP_SaveReplayButton = NULL;
    this->BP_ReplaySaved = NULL;
    this->bCanShowOnlineTimer = false;
    this->bRequestedManualReplaySave = false;
    this->ViewingStatsTimeout = 1.00f;
    this->ForfeitPopup = NULL;
}

bool UResultsScreenWidget::WillSaveReplay() const {
    return false;
}

void UResultsScreenWidget::StartCoinSFX() {
}

void UResultsScreenWidget::ShowFadeIn() {
}

bool UResultsScreenWidget::ShouldShowMedalUpdate() {
    return false;
}

bool UResultsScreenWidget::ShouldDisplayXpForSlot(const int32& PlayerSlot) {
    return false;
}

bool UResultsScreenWidget::ShouldDisplayRankUpdate() {
    return false;
}

bool UResultsScreenWidget::ShouldDisplayEventLevelUp() {
    return false;
}

bool UResultsScreenWidget::ShouldAutoShowStats() {
    return false;
}

void UResultsScreenWidget::SetTimeStartedViewingStats(const double& InTime) {
}

void UResultsScreenWidget::RequestSaveReplay(const int32& PlayerSlot) {
}

void UResultsScreenWidget::QueueRewardForDisplay(const FResultsRewardInfo RewardInfo) {
}

void UResultsScreenWidget::ProcessXpUpdate(const FResultsXpUpdateInfo XpUpdate) {
}

void UResultsScreenWidget::ProcessRankUpdate(const FResultsRankUpdateInfo RankUpdate) {
}

void UResultsScreenWidget::ProcessNextReward() {
}

void UResultsScreenWidget::ProcessMedalUpdate(const FResultsMedalUpdateInfo InMedalUpdate) {
}

void UResultsScreenWidget::ProcessEventXpUpdate(const FResultsXpUpdateInfo XpUpdate) {
}



void UResultsScreenWidget::PlayCoinTotalAppearSFX() {
}

void UResultsScreenWidget::MarkReadyForNextMatch(const int32& PlayerSlot) {
}

void UResultsScreenWidget::MarkNotReadyForNextMatch(const int32& PlayerSlot) {
}



bool UResultsScreenWidget::JustStartedViewingStats(const double& InTime) {
    return false;
}

bool UResultsScreenWidget::IsPlayerReady(const int32& PlayerSlot) const {
    return false;
}

bool UResultsScreenWidget::IsPlayerCpu(const int32& PlayerSlot) const {
    return false;
}

bool UResultsScreenWidget::IsPlayerActive(const int32& PlayerSlot) const {
    return false;
}

bool UResultsScreenWidget::IsOnlineMatch() {
    return false;
}

bool UResultsScreenWidget::IsLobbyMatch() {
    return false;
}

bool UResultsScreenWidget::IsLastMatchInSet() {
    return false;
}

bool UResultsScreenWidget::IsEveryoneReady() const {
    return false;
}

bool UResultsScreenWidget::HasReportedServer() const {
    return false;
}

FResultsXpUpdateInfo UResultsScreenWidget::GetXpUpdateForSlot(const int32& PlayerSlot) {
    return FResultsXpUpdateInfo{};
}

TScriptInterface<IXpUpdateDisplayInterface> UResultsScreenWidget::GetXpUpdateDisplayInterface() {
    return NULL;
}

int32 UResultsScreenWidget::GetWinsRequired() {
    return 0;
}

int32 UResultsScreenWidget::GetPlayerWins(const int32& PlayerSlot) const {
    return 0;
}

int32 UResultsScreenWidget::GetPlayerSlotForPlayerController(APlayerController* InController) {
    return 0;
}

FResultsPlayerBoxInfo UResultsScreenWidget::GetPlayerResultsInfo(const int32& PlayerSlot) const {
    return FResultsPlayerBoxInfo{};
}

int32 UResultsScreenWidget::GetPlayerRank(const int32& PlayerSlot) const {
    return 0;
}

FText UResultsScreenWidget::GetPlayerName(const int32& PlayerSlot) const {
    return FText::GetEmpty();
}

TArray<FRivalsMatchResult> UResultsScreenWidget::GetPlayerMatchHistory(const int32& PlayerSlot) const {
    return TArray<FRivalsMatchResult>();
}

int32 UResultsScreenWidget::GetPlayerInitialWinStreak(const int32& PlayerSlot) const {
    return 0;
}

int32 UResultsScreenWidget::GetPlayerCurrentWinStreak(const int32& PlayerSlot) const {
    return 0;
}

FResultsRankUpdateInfo UResultsScreenWidget::GetNextRankUpdate() {
    return FResultsRankUpdateInfo{};
}

FResultsMedalUpdateInfo UResultsScreenWidget::GetMedalUpdate() {
    return FResultsMedalUpdateInfo{};
}

FRivalsPlayerTag UResultsScreenWidget::GetCurrentPlayerTagInfo(const int32& PlayerSlot) {
    return FRivalsPlayerTag{};
}

void UResultsScreenWidget::ForceReadyForNextMatch(const int32& PlayerSlot) {
}

void UResultsScreenWidget::EndCoinSFX() {
}

void UResultsScreenWidget::ClickedNextRound(const int32& PlayerSlot) {
}

void UResultsScreenWidget::ClickedBackToMatchmaking(const int32& PlayerSlot) {
}









