#include "MainMenuUpdateButtonWidget.h"

UMainMenuUpdateButtonWidget::UMainMenuUpdateButtonWidget() {
    this->EventTitle = FText::FromString(TEXT("Update Title"));
    this->UseUrl = false;
    this->BP_UpdateTitleTextBlock = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UMainMenuUpdateButtonWidget::OnUnhover() {
}

void UMainMenuUpdateButtonWidget::OnReleased() {
}

void UMainMenuUpdateButtonWidget::OnPressed() {
}

void UMainMenuUpdateButtonWidget::OnLostFocus(const int32 UserIndex) {
}

void UMainMenuUpdateButtonWidget::OnHover() {
}

void UMainMenuUpdateButtonWidget::OnFocus(const int32 UserIndex) {
}


