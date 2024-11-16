#include "RivalsCameraSettings.h"

FRivalsCameraSettings::FRivalsCameraSettings() {
    this->CameraBoundsMultiplierSide = 0.00f;
    this->CameraBoundsMultiplierTop = 0.00f;
    this->CameraBoundsMultiplierBottom = 0.00f;
    this->ZoomDistanceMin = 0.00f;
    this->ZoomDistanceMax = 0.00f;
    this->BoundingBox = NULL;
    this->CameraType = NoOverride;
    this->bKeepRivalsInView = false;
    this->TransitionLerpAlpha = 0.00f;
    this->CameraGradient = None;
}

