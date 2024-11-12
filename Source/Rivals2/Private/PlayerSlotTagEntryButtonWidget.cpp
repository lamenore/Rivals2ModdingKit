#include "PlayerSlotTagEntryButtonWidget.h"

UPlayerSlotTagEntryButtonWidget::UPlayerSlotTagEntryButtonWidget() {
    this->IsNextChoiceButton = false;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->CurrentCharacterChoiceIndex = 0;
    this->BP_TextDisplay = NULL;
    this->BP_Border = NULL;
    this->BP_ButtonInteract = NULL;
}

void UPlayerSlotTagEntryButtonWidget::OnFocusReceivedRelay(const int32 PlayerIndex) {
}

void UPlayerSlotTagEntryButtonWidget::OnFocusLostRelay(const int32 UserIndex) {
}

void UPlayerSlotTagEntryButtonWidget::OnClickedRelay(const int32 PlayerIndex) {
}


