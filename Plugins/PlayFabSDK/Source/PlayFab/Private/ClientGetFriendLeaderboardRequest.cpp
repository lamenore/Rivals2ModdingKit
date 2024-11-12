#include "ClientGetFriendLeaderboardRequest.h"

FClientGetFriendLeaderboardRequest::FClientGetFriendLeaderboardRequest() {
    this->CustomTags = NULL;
    this->ExternalPlatformFriends = EExternalFriendSources::pfenum_None;
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

