#include "PlayerSlotOptionsTagEntryTab.h"

UPlayerSlotOptionsTagEntryTab::UPlayerSlotOptionsTagEntryTab() {
    this->CurrentCharacterChoiceIndex = 0;
    this->MaxCharacterChoiceCount = 1;
    this->LastPressedButton = NULL;
    this->BP_ButtonGrid = NULL;
    this->BP_TagDisplayTextBlock = NULL;
    this->BP_ConfirmButton = NULL;
    this->BP_DeleteButton = NULL;
}


