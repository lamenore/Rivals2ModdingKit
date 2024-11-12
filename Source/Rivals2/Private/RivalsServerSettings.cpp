#include "RivalsServerSettings.h"

URivalsServerSettings::URivalsServerSettings() {
    this->WaitingForPlayersTimeout = 30.00f;
    this->HostingMatchMaxTimeout = 10800.00f;
    this->HostingEmptyMatchTimeout = 60.00f;
    this->TimeAfterEndingMatchBeforeShuttingDown = 5.00f;
    this->bShouldForceHostingMatchAfterWaitingForPlayersTimeout = true;
    this->ServerType = ERivalsServerType::Edgegap;
}


