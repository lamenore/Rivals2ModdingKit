#include "RivalsRankedSubsystem.h"

URivalsRankedSubsystem::URivalsRankedSubsystem() {
    this->CasualElo = 1000;
    this->CasualMonthlyMatches = 0;
    this->CasualMonthlyWins = 0;
    this->CasualWinStreak = 0;
    this->RankedElo = 1000;
    this->RankedSeasonMatches = 0;
    this->RankedSeasonWins = 0;
    this->RankedWinStreak = 0;
    this->CurrentRankLosses = 0;
    this->RankedLeaderboardPosition = 9999;
    this->PlayerSeasonIndex = 0;
    this->SkillStartSetting = ESkillStartSetting::None;
    this->bIsWeeklyBonusAvailable = false;
}

void URivalsRankedSubsystem::UpdateSkillStartSetting(const ESkillStartSetting InSkillStartSetting) {
}

void URivalsRankedSubsystem::UpdateRankedWinStreak(const int32 InRankedWinStreak) {
}

void URivalsRankedSubsystem::UpdateRankedSeasonWins(const int32 InRankedSeasonWins) {
}

void URivalsRankedSubsystem::UpdateRankedSeasonMatches(const int32 InRankedSeasonMatches) {
}

void URivalsRankedSubsystem::UpdateRankedLeaderboardPosition(const int32 InRankedLeaderboardPosition) {
}

void URivalsRankedSubsystem::UpdateRankedElo(const int32 InRankedElo, const bool bIsAuthoritative) {
}

void URivalsRankedSubsystem::UpdateCurrentRankLosses(const int32 InCurrentRankLosses) {
}

void URivalsRankedSubsystem::UpdateCasualWinStreak(const int32 InCasualWinStreak) {
}

void URivalsRankedSubsystem::UpdateCasualMonthlyWins(const int32 InCasualMonthlyWins) {
}

void URivalsRankedSubsystem::UpdateCasualMonthlyMatches(const int32 InCasualMonthlyMatches) {
}

void URivalsRankedSubsystem::UpdateCasualElo(const int32 InCasualElo, const bool bIsAuthoritative) {
}

bool URivalsRankedSubsystem::ShouldOpenSkillCheckPrompt() {
    return false;
}

void URivalsRankedSubsystem::RequestSkillStartSettingUpdate(const ESkillStartSetting InSkillStartSetting) {
}

bool URivalsRankedSubsystem::IsWeeklyBonusAvailable() {
    return false;
}

bool URivalsRankedSubsystem::HasFetchedTitleData() {
    return false;
}

FLinearColor URivalsRankedSubsystem::GetWinStreakColor(const int32 InWinStreak) {
    return FLinearColor{};
}

float URivalsRankedSubsystem::GetWinStreakBonusPercent(const int32 InWinStreak, const ERivalsRank InRank) const {
    return 0.0f;
}

ERivalsRank URivalsRankedSubsystem::GetV2Rank(const int32 InElo, const int32 InWinCount, const int32 InLeaderboardPos) {
    return ERivalsRank::Unranked;
}

ERivalsRank URivalsRankedSubsystem::GetV1Rank(const int32 InElo, const int32 InMatchCount) {
    return ERivalsRank::Unranked;
}

FText URivalsRankedSubsystem::GetSeasonTitleByIndex(const int32& InSeasonIndex) {
    return FText::GetEmpty();
}

FText URivalsRankedSubsystem::GetSeasonQuarterNameByIndex(const int32& InQuarterIndex) {
    return FText::GetEmpty();
}

int32 URivalsRankedSubsystem::GetRankUpBonusAmount() {
    return 0;
}

FRivalsRankTitleData URivalsRankedSubsystem::GetRankTitleData() {
    return FRivalsRankTitleData{};
}

FRivalsRankSeasonTitleData URivalsRankedSubsystem::GetRankSeasonFullTitleData() {
    return FRivalsRankSeasonTitleData{};
}

FRivalsRankSeasonEntryData URivalsRankedSubsystem::GetRankSeasonEntry(const int32& InEntryIndex) {
    return FRivalsRankSeasonEntryData{};
}

ERivalsRank URivalsRankedSubsystem::GetRankNoPlacements(const int32 InElo, const int32 InLeaderboardPos) {
    return ERivalsRank::Unranked;
}

FRivalsRankMedalsSettings URivalsRankedSubsystem::GetRankMedalSettings() {
    return FRivalsRankMedalsSettings{};
}

ERivalsRank URivalsRankedSubsystem::GetRankMatchmakingTier(const ERivalsRank& InRank) {
    return ERivalsRank::Unranked;
}

ERivalsRank URivalsRankedSubsystem::GetRankInCurrentSeason(const int32 InElo, const int32 InMatchCount, const int32 InWinCount, const int32 InLeaderboardPos) {
    return ERivalsRank::Unranked;
}

FText URivalsRankedSubsystem::GetRankEloText(const int32 InElo, const int32 InMatchCount, const int32 InWinCount, const int32 InSeasonIndex) {
    return FText::GetEmpty();
}

int32 URivalsRankedSubsystem::GetRankedWinStreak() {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedSeasonWins() {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedSeasonMatches() {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedLeaderboardPosition() {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedKValue(const int32 InMatchCount, const int32 InWinCount, const bool bIsRanked) {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedElo() {
    return 0;
}

ERivalsRank URivalsRankedSubsystem::GetRank(const int32 InElo, const int32 InMatchCount, const int32 InWinCount, const int32 InSeasonIndex, const int32 InLeaderboardPos) {
    return ERivalsRank::Unranked;
}

FText URivalsRankedSubsystem::GetPlusMedalsText(const int32 InMedalCount) {
    return FText::GetEmpty();
}

void URivalsRankedSubsystem::GetPlayFabRankStatistics() {
}

ESkillStartSetting URivalsRankedSubsystem::GetPlayerSkillSetting() {
    return ESkillStartSetting::None;
}

ERivalsRank URivalsRankedSubsystem::GetPlayerRankNoPlacements() {
    return ERivalsRank::Unranked;
}

ERivalsRank URivalsRankedSubsystem::GetPlayerRankMatchmakingTier() {
    return ERivalsRank::Unranked;
}

ERivalsRank URivalsRankedSubsystem::GetPlayerRank() {
    return ERivalsRank::Unranked;
}

FText URivalsRankedSubsystem::GetNameForRank(const ERivalsRank InRank) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> URivalsRankedSubsystem::GetIconForRank(const ERivalsRank InRank) {
    return NULL;
}

int32 URivalsRankedSubsystem::GetCurrentSeasonYear() {
    return 0;
}

FDateTime URivalsRankedSubsystem::GetCurrentSeasonRolloverDate() {
    return FDateTime{};
}

int32 URivalsRankedSubsystem::GetCurrentSeasonQuarter() {
    return 0;
}

int32 URivalsRankedSubsystem::GetCurrentSeasonIndex() {
    return 0;
}

FRivalsRankSeasonEntryData URivalsRankedSubsystem::GetCurrentRankSeasonEntry() {
    return FRivalsRankSeasonEntryData{};
}

int32 URivalsRankedSubsystem::GetCurrentRankLosses() {
    return 0;
}

FLinearColor URivalsRankedSubsystem::GetColorForRank(const ERivalsRank InRank) {
    return FLinearColor{};
}

int32 URivalsRankedSubsystem::GetCasualWinStreak() {
    return 0;
}

int32 URivalsRankedSubsystem::GetCasualMonthlyWins() {
    return 0;
}

int32 URivalsRankedSubsystem::GetCasualMonthlyMatches() {
    return 0;
}

int32 URivalsRankedSubsystem::GetCasualElo() {
    return 0;
}


