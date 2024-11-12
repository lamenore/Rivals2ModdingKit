#include "PlayFabNetDriver.h"

UPlayFabNetDriver::UPlayFabNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("OnlineSubsystemPlayFab.PlayFabNetConnection");
    this->ChannelDefinitions.AddDefaulted(4);
}


