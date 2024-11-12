#include "RivalsServerConnectionData.h"

FRivalsServerConnectionData::FRivalsServerConnectionData() {
    this->bIsActive = false;
    this->bIsLobbyMatch = false;
    this->bIsRankedMatch = false;
    this->InitialConnectionTime = 0.00f;
    this->LastMatchStartTime = 0.00f;
}

