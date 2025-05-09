#include "TrainingModeUIBase.h"

UTrainingModeUIBase::UTrainingModeUIBase() {
    this->TrainingMenu = NULL;
    this->BP_InputsBox = NULL;
    this->BP_SuccessCounter = NULL;
    this->BP_RecordingIndicator = NULL;
    this->BP_DpadRight = NULL;
    this->BP_DpadLeft = NULL;
    this->BP_DpadDown = NULL;
    this->BP_RightDisplayer = NULL;
    this->BP_LeftDisplayer = NULL;
    this->BP_DownDisplayer = NULL;
    this->bMenuOpen = false;
}

void UTrainingModeUIBase::UpdateActionCount() {
}

void UTrainingModeUIBase::SetMenuOpen(bool IsOpen) {
}

void UTrainingModeUIBase::OnMatchRestarted(ERivalsSessionState SessionState) {
}

URivalsStageData* UTrainingModeUIBase::GetCurrentStageData() {
    return NULL;
}


