#include "PauseMenuWidget.h"

UPauseMenuWidget::UPauseMenuWidget() {
    this->ParentHUD = NULL;
    this->RivalsGameInstance = NULL;
    this->bCachedVisibility = false;
    this->Controller = NULL;
    this->BP_WidgetSwitcher = NULL;
}


void UPauseMenuWidget::StopPauseSnapshot() {
}

void UPauseMenuWidget::StartPauseSnapshot() {
}

void UPauseMenuWidget::SetFreeCameraVisible(bool bIsVisible) {
}

void UPauseMenuWidget::RestartMatch(const int32& PlayerIndex) {
}

void UPauseMenuWidget::RequestUnpause(const int32& PlayerIndex) {
}

void UPauseMenuWidget::EndMatch(const int32& PlayerIndex) {
}




