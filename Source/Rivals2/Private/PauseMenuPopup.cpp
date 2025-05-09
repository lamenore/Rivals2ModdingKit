#include "PauseMenuPopup.h"

UPauseMenuPopup::UPauseMenuPopup() {
    this->BP_TopLeftText = NULL;
    this->BP_TopLeftFadeBG = NULL;
    this->BP_TabSwitcher = NULL;
    this->BP_HomeTab = NULL;
    this->BP_HUDOptionsTab = NULL;
    this->BP_DebugOptionsTab = NULL;
    this->BP_EntryAnim = NULL;
    this->BP_ChangeTabAnim = NULL;
    this->BP_MovingButtonHover = NULL;
    this->BP_HoverContainer = NULL;
}

void UPauseMenuPopup::RestartMatch(const int32& PlayerIndex) {
}

void UPauseMenuPopup::RequestUnpause(const int32& PlayerIndex) {
}

void UPauseMenuPopup::EndMatch(const int32& PlayerIndex) {
}


