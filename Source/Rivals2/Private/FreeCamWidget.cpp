#include "FreeCamWidget.h"

UFreeCamWidget::UFreeCamWidget() {
    this->RivalsCamera = NULL;
    this->CameraComponent = NULL;
    this->BP_ControlsBox = NULL;
    this->BP_LockCameraText = NULL;
    this->BP_FollowPlayerText = NULL;
}

void UFreeCamWidget::ToggleHUD() {
}

void UFreeCamWidget::SetLocked(bool IsLocked) {
}

void UFreeCamWidget::SetFollowPlayer(bool FollowPlayer) {
}

bool UFreeCamWidget::IsZoomingOut() {
    return false;
}

bool UFreeCamWidget::IsZoomingIn() {
    return false;
}

bool UFreeCamWidget::IsMovingUp() {
    return false;
}

bool UFreeCamWidget::IsMovingDown() {
    return false;
}

bool UFreeCamWidget::IsCameraLocked() {
    return false;
}

float UFreeCamWidget::GetZoomDirection() {
    return 0.0f;
}

float UFreeCamWidget::GetCurrentFOV() {
    return 0.0f;
}


