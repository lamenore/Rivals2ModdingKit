#include "RivalsPlayerRankData.h"

FRivalsPlayerRankData::FRivalsPlayerRankData() {
    this->PrevElo = 0;
    this->Elo = 0;
    this->SeasonMatches = 0;
    this->SeasonWins = 0;
    this->bWonLastMatch = false;
}

