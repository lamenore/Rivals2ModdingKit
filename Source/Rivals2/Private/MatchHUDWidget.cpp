#include "MatchHUDWidget.h"

UMatchHUDWidget::UMatchHUDWidget() {
    this->BP_LetterBox_Open = NULL;
    this->BP_LetterBox_Close = NULL;
    this->BP_LetterBox_OpenToFocus = NULL;
    this->BP_LetterBox_CloseToFocus = NULL;
    this->BP_LetterBox_CloseFromFocus = NULL;
    this->BP_HordeStockDisplay = NULL;
    this->bHasProcessedMatchStart = false;
}

void UMatchHUDWidget::ShowLetterbox(ELetterboxTransition TransitionType) {
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


