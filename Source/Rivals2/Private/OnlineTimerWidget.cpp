#include "OnlineTimerWidget.h"

UOnlineTimerWidget::UOnlineTimerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_TimerSizeBox = NULL;
    this->BP_TimerText = NULL;
    this->BP_NoticeScaleBox = NULL;
    this->BP_NoticeText = NULL;
    this->BP_ImageBG = NULL;
}

void UOnlineTimerWidget::UpdateVisibility(bool bIsVisible) {
}

void UOnlineTimerWidget::UpdateTimer(float InTimeRemaining) {
}

void UOnlineTimerWidget::UpdateNotice(FText InNotice) {
}



