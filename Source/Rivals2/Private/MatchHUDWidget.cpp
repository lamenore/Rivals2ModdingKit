#include "MatchHUDWidget.h"

UMatchHUDWidget::UMatchHUDWidget() {
    this->BP_LetterBox_Open = NULL;
    this->BP_LetterBox_Close = NULL;
    this->BP_LetterBox_OpenToFocus = NULL;
    this->BP_LetterBox_CloseToFocus = NULL;
    this->BP_LetterBox_CloseFromFocus = NULL;
    this->BP_FreeCamOverlay = NULL;
    this->BP_ClientStats = NULL;
    this->BP_ServerStats = NULL;
    this->BP_HoldToPauseContainer = NULL;
    this->BP_HordeStockDisplay = NULL;
    this->bHasProcessedMatchStart = false;
    this->bIsStartDown = false;
    this->HoldToPauseController = NULL;
    this->StartHeldTime = 0.00f;
    this->bPaused = false;
    this->PauseMenuPopup = NULL;
}

void UMatchHUDWidget::ShowLetterbox(ELetterboxTransition TransitionType) {
}





bool UMatchHUDWidget::IsPauseMenuOpen() const {
    return false;
}

FRivalsServerMatchInfo UMatchHUDWidget::GetServerMatchInfo() {
    return FRivalsServerMatchInfo{};
}

float UMatchHUDWidget::GetScale(FGeometry Geometry) const {
    return 0.0f;
}

int32 UMatchHUDWidget::GetGameplayFrame() const {
    return 0;
}

FVector2D UMatchHUDWidget::GetAbsolutePositionAtCoordinates(FGeometry Geometry, const FVector2D Coordinates) const {
    return FVector2D{};
}

void UMatchHUDWidget::ForceOpenLetterbox() {
}


