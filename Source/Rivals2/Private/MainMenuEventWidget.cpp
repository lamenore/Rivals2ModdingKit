#include "MainMenuEventWidget.h"

UMainMenuEventWidget::UMainMenuEventWidget() {
    this->EventTitle = FText::FromString(TEXT("Event Name"));
    this->EventThumbnail = NULL;
    this->UseUrl = false;
    this->BP_EventThumbnailImage = NULL;
    this->BP_EventTitleTextBlock = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UMainMenuEventWidget::OnUnhover() {
}

void UMainMenuEventWidget::OnReleased() {
}

void UMainMenuEventWidget::OnPressed() {
}

void UMainMenuEventWidget::OnLostFocus(const int32 UserIndex) {
}

void UMainMenuEventWidget::OnHover() {
}

void UMainMenuEventWidget::OnFocus(const int32 UserIndex) {
}


