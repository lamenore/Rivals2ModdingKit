#include "NetworkSignalDisplay.h"

UNetworkSignalDisplay::UNetworkSignalDisplay() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisplayPing = false;
    this->PingAmount = 0;
    this->BP_PingText = NULL;
    this->BP_SignalImage = NULL;
}


