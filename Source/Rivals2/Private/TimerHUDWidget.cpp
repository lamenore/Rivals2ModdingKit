#include "TimerHUDWidget.h"

UTimerHUDWidget::UTimerHUDWidget() {
    this->BP_MinutesText = NULL;
    this->BP_SecondsText = NULL;
    this->BP_FramesText = NULL;
    this->BP_Separator = NULL;
    this->BP_OvertimeText = NULL;
    this->BP_CountdownPop = NULL;
    this->BP_OvertimeStart = NULL;
    this->BP_TimerCanvas = NULL;
}

void UTimerHUDWidget::UpdateMatchTime() {
}

void UTimerHUDWidget::SetIsCountdown(bool NewIsCountdown) {
}

void UTimerHUDWidget::OnMatchRestarted(ERivalsSessionState SessionState) {
}

bool UTimerHUDWidget::IsLastTenSeconds() {
    return false;
}

bool UTimerHUDWidget::IsInOvertime() {
    return false;
}

bool UTimerHUDWidget::IsCountdown() {
    return false;
}


