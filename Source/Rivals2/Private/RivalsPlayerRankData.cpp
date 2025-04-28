#include "RivalsPlayerRankData.h"

FRivalsPlayerRankData::FRivalsPlayerRankData() {
    this->bIsInitialized = false;
    this->PrevElo = 0;
    this->Elo = 0;
    this->SeasonMatches = 0;
    this->SeasonWins = 0;
    this->SeasonWinStreak = 0;
    this->WinStreakBonusElo = 0;
    this->PrevLeaderboardPosition = 0;
    this->LeaderboardPosition = 0;
    this->CurrentRankLosses = 0;
    this->SeasonIndex = 0;
    this->bWonLastMatch = false;
}

