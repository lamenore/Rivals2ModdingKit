#include "ClientGetFriendsListRequest.h"

FClientGetFriendsListRequest::FClientGetFriendsListRequest() {
    this->CustomTags = NULL;
    this->ExternalPlatformFriends = EExternalFriendSources::pfenum_None;
    this->ProfileConstraints = NULL;
}

