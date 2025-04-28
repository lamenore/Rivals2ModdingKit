#include "ResultsPlayerInfo.h"

FResultsPlayerInfo::FResultsPlayerInfo() {
    this->bPlayerActive = false;
    this->bPlayerReady = false;
    this->bIsCpu = false;
    this->PlayerRank = 0;
    this->ColorSlot = ERivalsColorSlot::None;
    this->Wins = 0;
    this->InitialWinStreak = 0;
    this->CurrentWinStreak = 0;
}

