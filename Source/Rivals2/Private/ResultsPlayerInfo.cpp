#include "ResultsPlayerInfo.h"

FResultsPlayerInfo::FResultsPlayerInfo() {
    this->bPlayerActive = false;
    this->bPlayerReady = false;
    this->bIsCpu = false;
    this->PlayerRank = 0;
    this->ColorSlot = ERivalsColorSlot::None;
    this->Wins = 0;
}

