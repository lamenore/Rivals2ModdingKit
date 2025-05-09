#include "RecordingIndicatorWidget.h"

URecordingIndicatorWidget::URecordingIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_FrameCounterText = NULL;
    this->BP_StatusIcon = NULL;
    this->BP_RecordingLoopAnim = NULL;
    this->BP_PlayingLoopAnim = NULL;
}

void URecordingIndicatorWidget::UpdateIcon(bool bIsPlayback, bool bIsRecording) {
}

void URecordingIndicatorWidget::SetFrameCount(int32 CurrentFrame, int32 TotalFrames) {
}


