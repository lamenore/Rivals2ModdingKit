#include "ReplaySettingsPopup.h"

UReplaySettingsPopup::UReplaySettingsPopup() {
    this->CameraType = EMarkerCameraType::Regular;
    this->BP_TabSwitcher = NULL;
    this->BP_ExportButton = NULL;
    this->BP_CloseButton = NULL;
    this->BP_ErrorText = NULL;
    this->BP_OutputSettings = NULL;
    this->BP_ErrorTextAnimation = NULL;
    this->RivalsCamera = NULL;
    this->LevelSequence = NULL;
    this->MPC_GameplayValues = NULL;
    this->MRQ_Config = NULL;
    this->CommandLineEncoderSettings = NULL;
    this->ExportFrameRate = 60;
}

UWidget* UReplaySettingsPopup::OnNavigate(EUINavigation Direction) {
    return NULL;
}

void UReplaySettingsPopup::OnExportPressed(const int32 UserIndex) {
}

void UReplaySettingsPopup::OnClosePressed(const int32 UserIndex) {
}


