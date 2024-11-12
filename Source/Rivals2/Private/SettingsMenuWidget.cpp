#include "SettingsMenuWidget.h"

USettingsMenuWidget::USettingsMenuWidget() {
    this->BP_TabSwitcher = NULL;
    this->BP_GraphicsTab = NULL;
    this->BP_AudioTab = NULL;
    this->BP_GameplayTab = NULL;
    this->BP_GraphicsTabButton = NULL;
    this->BP_AudioTabButton = NULL;
    this->BP_GameplayTabButton = NULL;
    this->BP_TabBox = NULL;
    this->HoveredThumbnailMat = NULL;
    this->DefaultThumbnailMat = NULL;
    this->BP_ApplyButton = NULL;
    this->BP_CloseButton = NULL;
    this->CurrentState = NULL;
    this->IntendedState = NULL;
    this->ControllerIndex = 0;
}

void USettingsMenuWidget::SetUserIndex(int32 Index) {
}

UWidget* USettingsMenuWidget::OnNavigate(EUINavigation Direction) {
    return NULL;
}

void USettingsMenuWidget::OnGraphicsTabPressed(const int32 UserIndex) {
}

void USettingsMenuWidget::OnGameplayTabPressed(const int32 UserIndex) {
}

void USettingsMenuWidget::OnClosePressed() {
}

void USettingsMenuWidget::OnAudioTabPressed(const int32 UserIndex) {
}

void USettingsMenuWidget::OnApplyPressed() {
}

void USettingsMenuWidget::CloseSettings() {
}

void USettingsMenuWidget::ApplySettings() {
}


