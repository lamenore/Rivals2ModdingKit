#include "GameplaySettings.h"

FGameplaySettings::FGameplaySettings() {
    this->CameraShakeStrength = ERivalsCameraShakeStrength::None;
    this->CharacterOutlines = false;
    this->TeamOutlines = false;
    this->ReplayAutoSave = ERivalsReplayAutoSaveSetting::Off;
}

