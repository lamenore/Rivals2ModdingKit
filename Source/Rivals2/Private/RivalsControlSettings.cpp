#include "RivalsControlSettings.h"

FRivalsControlSettings::FRivalsControlSettings() {
    this->bAutoWalk = false;
    this->bDpadMovement = false;
    this->JoystickDeadzoneMultiplier = 0.00f;
    this->JoystickSensitivityMultiplier = 0.00f;
    this->RightStickThreshold = 0.00f;
    this->RightStickSetting = ERivalsRightStickSetting::Strong;
    this->AirGrabSetting = ERivalsAirGrabParrySetting::Nair;
    this->AirParrySetting = ERivalsAirGrabParrySetting::Nair;
    this->TriggerThreshold = 0.00f;
    this->bRumbleEnabled = false;
    this->bTapJumpEnabled = false;
    this->bTapStrongEnabled = false;
    this->bTapWalljumpEnabled = false;
}

