#include "ResultsRankUpdateInfo.h"

FResultsRankUpdateInfo::FResultsRankUpdateInfo() {
    this->PlayerSlot = 0;
    this->bWasSuccessful = false;
    this->bWasWin = false;
    this->PreviousElo = 0;
    this->DeltaElo = 0;
    this->NewElo = 0;
    this->SeasonMatches = 0;
    this->PrevSeasonWins = 0;
    this->SeasonWins = 0;
    this->SeasonWinStreak = 0;
    this->PrevLeaderboardPos = 0;
    this->NewLeaderboardPos = 0;
    this->WinStreakBonusElo = 0;
    this->CurrentRankLosses = 0;
}

