#include "OffscreenIndicatorWidget.h"

UOffscreenIndicatorWidget::UOffscreenIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerIndex = 0;
    this->Portrait = NULL;
    this->bIsCharacterFacingRight = false;
    this->OwnerObject = NULL;
}





FLinearColor UOffscreenIndicatorWidget::GetPlayerColor() const {
    return FLinearColor{};
}


