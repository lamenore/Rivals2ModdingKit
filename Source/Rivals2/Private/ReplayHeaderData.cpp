#include "ReplayHeaderData.h"

FReplayHeaderData::FReplayHeaderData() {
    this->ReplayStartTime = 0;
    this->ReplayEndTime = 0;
    this->StageSkin = NULL;
    this->MatchType = EReplayMatchType::None;
    this->IsFavorite = false;
}

