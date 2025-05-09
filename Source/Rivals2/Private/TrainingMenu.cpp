#include "TrainingMenu.h"

UTrainingMenu::UTrainingMenu() {
    this->HoveredThumbnailMat = NULL;
    this->DefaultThumbnailMat = NULL;
    this->BP_TabSwitcher = NULL;
    this->BP_GeneralTab = NULL;
    this->BP_CpuTab = NULL;
    this->BP_DebugTab = NULL;
    this->BP_RecordingTab = NULL;
    this->BP_PlaybackTab = NULL;
    this->BP_GeneralTabButton = NULL;
    this->BP_CpuTabButton = NULL;
    this->BP_DebugTabButton = NULL;
    this->BP_RecordingTabButton = NULL;
    this->BP_PlaybackTabButton = NULL;
    this->BP_TabBox = NULL;
}

void UTrainingMenu::OnRecordingTabPressed(const int32 UserIndex) {
}

void UTrainingMenu::OnPlaybackTabPressed(const int32 UserIndex) {
}

void UTrainingMenu::OnGeneralTabPressed(const int32 UserIndex) {
}

void UTrainingMenu::OnDebugTabPressed(const int32 UserIndex) {
}

void UTrainingMenu::OnCpuTabPressed(const int32 UserIndex) {
}

void UTrainingMenu::OnCloseReleased(const int32 Index) {
}

void UTrainingMenu::OnCloseLostFocus(const int32 UserIndex) {
}

void UTrainingMenu::OnCloseFocused(const int32 UserIndex) {
}


