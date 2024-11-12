#include "RivalsPlayFabLobbyInfo.h"

FRivalsPlayFabLobbyInfo::FRivalsPlayFabLobbyInfo() {
    this->AccessPolicy = Public;
    this->MaxPlayers = 0;
    this->CurrentPlayers = 0;
    this->bIsMembershipLocked = false;
    this->OwnerMigrationPolicy = ERivalsPlayFabLobbyOwnerMigrationPolicy::None;
    this->bUsesConnections = false;
    this->bIsActive = false;
}

