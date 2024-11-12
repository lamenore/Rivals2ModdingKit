#include "MultiplayerFindFriendLobbiesRequest.h"

FMultiplayerFindFriendLobbiesRequest::FMultiplayerFindFriendLobbiesRequest() {
    this->CustomTags = NULL;
    this->ExternalPlatformFriends = EExternalFriendSources::pfenum_None;
    this->Pagination = NULL;
}

