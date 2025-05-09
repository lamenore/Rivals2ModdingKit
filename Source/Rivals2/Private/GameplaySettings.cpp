#include "GameplaySettings.h"

FGameplaySettings::FGameplaySettings() {
    this->CursorSpeedMultiplier = 0.00f;
    this->CameraShakeStrength = ERivalsCameraShakeStrength::None;
    this->CharacterOutlines = false;
    this->TeamOutlines = false;
    this->ReplayAutoSave = ERivalsReplayAutoSaveSetting::Off;
}

