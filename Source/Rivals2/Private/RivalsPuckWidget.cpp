#include "RivalsPuckWidget.h"

URivalsPuckWidget::URivalsPuckWidget() {
    this->ParentCursorInterface = NULL;
    this->PuckOwnerPlayerSlot = 0;
    this->PuckImage = NULL;
    this->PuckText = NULL;
    this->CharacterButton = NULL;
    this->bIsPlaced = false;
    this->bIsCPUPuck = false;
    this->bIsActive = false;
}

void URivalsPuckWidget::OnPuckClicked(const int32& ClickingUserIndex) {
}





