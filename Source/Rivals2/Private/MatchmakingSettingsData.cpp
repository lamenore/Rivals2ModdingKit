#include "MatchmakingSettingsData.h"

UMatchmakingSettingsData::UMatchmakingSettingsData() {
    this->Backend = ERivalsMatchmakingBackend::PlayFab;
    this->EdgegapJoinSessionDelay = 8.50f;
    this->EdgegapPollInterval = 5.00f;
    this->EdgegapPollCap = 15;
    this->EdgegapUserDataPollInterval = 6.00f;
    this->EdgegapUserDataPollCap = 10;
    this->MatchmakingTicketPollIntervalInSeconds = 6.00f;
    this->ConnectionPollInterval = 3.00f;
    this->ConnectionPollCap = 10;
    this->ConnectionAttemptCap = 5;
    this->MatchmakingTicketTimeout = 120.00f;
    this->MatchmakingMode = ERivalsMatchmakingMode::Default;
    this->QosBeaconUpdateIntervalInSeconds = 900;
    this->TimesToPingQosBeacons = 5;
    this->bShouldDropOutlierQosBeaconPing = true;
    this->MaxValidCasualEloDelta = 60;
    this->MaxTimeSinceLastMatchBeforeReconnectInSeconds = 480.00f;
    this->MaxTimeSinceConnectBeforeReconnectInSeconds = 3600.00f;
}

UMatchmakingSettingsData* UMatchmakingSettingsData::Get(const UObject* WorldContextObject) {
    return NULL;
}


