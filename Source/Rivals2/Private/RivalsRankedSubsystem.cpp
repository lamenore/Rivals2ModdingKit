#include "RivalsRankedSubsystem.h"

URivalsRankedSubsystem::URivalsRankedSubsystem() {
    this->CasualElo = 1000;
    this->CasualMonthlyMatches = 0;
    this->CasualMonthlyWins = 0;
    this->RankedElo = 1000;
    this->RankedSeasonMatches = 0;
    this->RankedSeasonWins = 0;
    this->SkillStartSetting = ESkillStartSetting::None;
}

void URivalsRankedSubsystem::UpdateSkillStartSetting(const ESkillStartSetting InSkillStartSetting) {
}

void URivalsRankedSubsystem::UpdateRankedSeasonWins(const int32 InRankedSeasonWins) {
}

void URivalsRankedSubsystem::UpdateRankedSeasonMatches(const int32 InRankedSeasonMatches) {
}

void URivalsRankedSubsystem::UpdateRankedElo(const int32 InRankedElo, const bool bIsAuthoritative) {
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

FRivalsRankTitleData URivalsRankedSubsystem::GetRankTitleData() {
    return FRivalsRankTitleData{};
}

FText URivalsRankedSubsystem::GetRankEloText(const int32 InElo, const int32 InMatchCount) {
    return FText::GetEmpty();
}

int32 URivalsRankedSubsystem::GetRankedSeasonWins() {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedSeasonMatches() {
    return 0;
}

int32 URivalsRankedSubsystem::GetRankedElo() {
    return 0;
}

ERivalsRank URivalsRankedSubsystem::GetRank(const int32 InElo, const int32 InMatchCount) {
    return ERivalsRank::Unranked;
}

void URivalsRankedSubsystem::GetPlayFabRankStatistics() {
}

ESkillStartSetting URivalsRankedSubsystem::GetPlayerSkillSetting() {
    return ESkillStartSetting::None;
}

ERivalsRank URivalsRankedSubsystem::GetPlayerRank() {
    return ERivalsRank::Unranked;
}

FText URivalsRankedSubsystem::GetNameForRank(const ERivalsRank InRank) {
    return FText::GetEmpty();
}

int32 URivalsRankedSubsystem::GetKValueForMatchCount(const int32 InMatchCount, const bool bIsRanked) {
    return 0;
}

TSoftObjectPtr<UTexture2D> URivalsRankedSubsystem::GetIconForRank(const ERivalsRank InRank) {
    return NULL;
}

FLinearColor URivalsRankedSubsystem::GetColorForRank(const ERivalsRank InRank) {
    return FLinearColor{};
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

bool URivalsRankedSubsystem::FetchedTitleData() {
    return false;
}


