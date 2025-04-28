#include "MatchAcceptDenyModal.h"

UMatchAcceptDenyModal::UMatchAcceptDenyModal() {
    this->BP_RegionText = NULL;
    this->BP_PingText = NULL;
    this->BP_TimerText = NULL;
    this->ModalTimeoutValue = 10.00f;
    this->TimeModalOpened = -1.00f;
    this->Ping = 0;
}


