#include "PlayerSlotOptionsTabInterface.h"

UPlayerSlotOptionsTabInterface::UPlayerSlotOptionsTabInterface() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonsContainer = NULL;
    this->ParentMenu = NULL;
    this->LastFocusedWidgetBeforeTabLeft = NULL;
}


