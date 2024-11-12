#include "RivalsPlayerController.h"
#include "RivalsCommandManager.h"

ARivalsPlayerController::ARivalsPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = URivalsCommandManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->HardPressSecondsMax = 0.05f;
    this->bAutoWalk = false;
    this->HardPressThreshold = 0.80f;
    this->UpwardHardPressThreshold = 0.70f;
    this->SoftPressThreshold = 0.29f;
    this->RightStickThreshold = 0.35f;
    this->RightStickSetting = ERivalsRightStickSetting::Strong;
    this->AirGrabSetting = ERivalsAirGrabParrySetting::Nair;
    this->AirParrySetting = ERivalsAirGrabParrySetting::Nair;
    this->TriggerThreshold = 0.19f;
    this->bRumbleEnabled = true;
    this->bTapJumpEnabled = false;
    this->bTapStrongEnabled = false;
    this->bTapWalljumpEnabled = false;
    this->bRightStickPressed = false;
    this->bUIHorizontalPressed = false;
    this->bUIVerticalPressed = false;
    this->bAcceptDown = false;
    this->bBackDown = false;
    this->bAction3Down = false;
    this->bAction4Down = false;
    this->bGCCSelectDown = false;
    this->bDownHard = false;
    this->bLeftHard = false;
    this->bRightHard = false;
    this->bUpHard = false;
    this->bLeftTriggerPressed = false;
    this->bLeftTriggerSpringless = false;
    this->bRightTriggerPressed = false;
    this->bRightTriggerSpringless = false;
    this->bWalkButtonDown = false;
    this->SecondsDownPressed = 0.00f;
    this->SecondsLeftPressed = 0.00f;
    this->SecondsRightPressed = 0.00f;
    this->SecondsUpPressed = 0.00f;
    this->SecondsStartPressed = 0.00f;
    this->SecondsSelectPressed = 0.00f;
    this->ShareStockCooldownTimer = 0.00f;
    this->bIsCursorEnabled = false;
}

void ARivalsPlayerController::UnlockCursor() {
}

void ARivalsPlayerController::ShowCursor() {
}

void ARivalsPlayerController::SetCursorToCenterScreen() {
}

void ARivalsPlayerController::SetCursorToCenterOfWidget(UWidget* Widget) {
}

void ARivalsPlayerController::RumbleController(const float& Intensity, const float& Duration) {
}

void ARivalsPlayerController::LockCursor() {
}

bool ARivalsPlayerController::IsCursorVisible() const {
    return false;
}

bool ARivalsPlayerController::IsCursorLocked() const {
    return false;
}

bool ARivalsPlayerController::IsCursorEnabled() {
    return false;
}

void ARivalsPlayerController::HideCursor() {
}

float ARivalsPlayerController::GetSecondsStartPressed() {
    return 0.0f;
}

float ARivalsPlayerController::GetSecondsSelectPressed() {
    return 0.0f;
}

float ARivalsPlayerController::GetRightStickVerticalValue() const {
    return 0.0f;
}

float ARivalsPlayerController::GetRightStickHorizontalValue() const {
    return 0.0f;
}

FLinearColor ARivalsPlayerController::GetMyPlayerColor() {
    return FLinearColor{};
}

float ARivalsPlayerController::GetMoveVerticalValue() const {
    return 0.0f;
}

float ARivalsPlayerController::GetMoveHorizontalValue() const {
    return 0.0f;
}

TArray<FKey> ARivalsPlayerController::GetKeysForActionMapping(const FName& ActionName, bool IncludeUIMappings) {
    return TArray<FKey>();
}

TMap<FKey, UTexture2D*> ARivalsPlayerController::GetIconsForInputDevice() {
    return TMap<FKey, UTexture2D*>();
}

UTexture2D* ARivalsPlayerController::GetIconForDeviceKey(FKey Key) {
    return NULL;
}

FVector2D ARivalsPlayerController::GetCursorPosition() {
    return FVector2D{};
}

FName ARivalsPlayerController::GetControllerName() const {
    return NAME_None;
}

void ARivalsPlayerController::EnableVirtualCursor(bool bLeftAnalogStick) {
}

void ARivalsPlayerController::DisableVirtualCursor() {
}

void ARivalsPlayerController::ApplyControllerSettings() {
}


