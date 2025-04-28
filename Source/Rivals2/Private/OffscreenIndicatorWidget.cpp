#include "OffscreenIndicatorWidget.h"

UOffscreenIndicatorWidget::UOffscreenIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerIndex = 0;
    this->Portrait = NULL;
    this->bIsCharacterFacingRight = false;
    this->OwnerObject = NULL;
    this->CharacterDefinition = NULL;
}





FLinearColor UOffscreenIndicatorWidget::GetPlayerColor() const {
    return FLinearColor{};
}


