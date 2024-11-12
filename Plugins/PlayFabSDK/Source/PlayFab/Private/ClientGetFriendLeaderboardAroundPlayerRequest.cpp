#include "ClientGetFriendLeaderboardAroundPlayerRequest.h"

FClientGetFriendLeaderboardAroundPlayerRequest::FClientGetFriendLeaderboardAroundPlayerRequest() {
    this->CustomTags = NULL;
    this->ExternalPlatformFriends = EExternalFriendSources::pfenum_None;
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

