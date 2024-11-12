#include "ServerGetFriendsListRequest.h"

FServerGetFriendsListRequest::FServerGetFriendsListRequest() {
    this->CustomTags = NULL;
    this->ExternalPlatformFriends = EExternalFriendSources::pfenum_None;
    this->ProfileConstraints = NULL;
}

