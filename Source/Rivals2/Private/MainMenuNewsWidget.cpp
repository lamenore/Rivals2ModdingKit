#include "MainMenuNewsWidget.h"

UMainMenuNewsWidget::UMainMenuNewsWidget() {
    this->NewsTitle = FText::FromString(TEXT("News Title"));
    this->NewsThumbnail = NULL;
    this->UseUrl = false;
    this->BP_NewsThumbnailImage = NULL;
    this->BP_NewsTitleTextBlock = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UMainMenuNewsWidget::OnUnhover() {
}

void UMainMenuNewsWidget::OnReleased() {
}

void UMainMenuNewsWidget::OnPressed() {
}

void UMainMenuNewsWidget::OnLostFocus(const int32 UserIndex) {
}

void UMainMenuNewsWidget::OnHover() {
}

void UMainMenuNewsWidget::OnFocus(const int32 UserIndex) {
}


