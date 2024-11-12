#include "MarkerMenuPopup.h"

UMarkerMenuPopup::UMarkerMenuPopup() {
    this->CameraType = EMarkerCameraType::Dolly;
    this->BP_TabSwitcher = NULL;
    this->BP_EditCameraButton = NULL;
    this->BP_DeleteKeyframeButton = NULL;
    this->BP_CameraTypeButton = NULL;
    this->BP_EditCameraText = NULL;
    this->BP_CameraTypeText = NULL;
    this->BP_FrameText = NULL;
    this->BP_FOVText = NULL;
    this->BP_PositionText = NULL;
    this->BP_RotationText = NULL;
}

void UMarkerMenuPopup::ToggleCameraType() {
}

void UMarkerMenuPopup::SetCameraType(EMarkerCameraType Type) {
}

void UMarkerMenuPopup::SetCameraInfoText() {
}

void UMarkerMenuPopup::OnEditCameraPressed() {
}

void UMarkerMenuPopup::OnDeleteKeyframePressed() {
}

void UMarkerMenuPopup::OnChangeTypePressed() {
}


