#include "ServerGetPlayersInSegmentRequest.h"

FServerGetPlayersInSegmentRequest::FServerGetPlayersInSegmentRequest() {
    this->CustomTags = NULL;
    this->GetProfilesAsync = false;
    this->MaxBatchSize = 0;
    this->SecondsToLive = 0;
}

