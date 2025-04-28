#include "CursorSettings.h"

UCursorSettings::UCursorSettings() {
    this->MaxAnalogCursorSpeed = 1300.00f;
    this->MaxAnalogCursorSpeedWhenHovered = 1100.00f;
    this->AnalogCursorDragCoefficient = 15.00f;
    this->AnalogCursorDragCoefficientWhenHovered = 15.00f;
    this->MinAnalogCursorSpeed = 5.00f;
    this->AnalogCursorDeadZone = 0.15f;
    this->AnalogCursorAccelerationMultiplier = 23000.00f;
    this->AnalogCursorSize = 500.00f;
    this->bUseEngineAnalogCursor = true;
    this->bAnalogCursorNoAcceleration = false;
}


