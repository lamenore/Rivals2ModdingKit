#include "PlayerSlotTagEntryConfirmButton.h"

UPlayerSlotTagEntryConfirmButton::UPlayerSlotTagEntryConfirmButton() {
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_Border = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_ButtonDisplayer = NULL;
}

void UPlayerSlotTagEntryConfirmButton::OnLostFocusRelay(const int32 UserIndex) {
}

void UPlayerSlotTagEntryConfirmButton::OnFocusReceivedRelay(const int32 UserIndex) {
}

void UPlayerSlotTagEntryConfirmButton::OnClickedRelay(const int32 UserIndex) {
}


