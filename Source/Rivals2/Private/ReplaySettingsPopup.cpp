#include "ReplaySettingsPopup.h"

UReplaySettingsPopup::UReplaySettingsPopup() {
    this->CameraType = EMarkerCameraType::Dolly;
    this->BP_TabSwitcher = NULL;
    this->BP_CameraTypeButton = NULL;
    this->BP_CameraTypeText = NULL;
    this->BP_ExportButton = NULL;
    this->BP_CloseButton = NULL;
    this->BP_ErrorText = NULL;
    this->BP_ErrorTextAnimation = NULL;
    this->RivalsCamera = NULL;
    this->LevelSequence = NULL;
    this->MPC_GameplayValues = NULL;
    this->MRQ_Config = NULL;
    this->CommandLineEncoderSettings = NULL;
}

void UReplaySettingsPopup::OnExportPressed() {
}

void UReplaySettingsPopup::OnClosePressed() {
}

void UReplaySettingsPopup::OnCameraTypePressed() {
}


