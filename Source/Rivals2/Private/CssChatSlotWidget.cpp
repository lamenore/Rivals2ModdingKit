#include "CssChatSlotWidget.h"

UCssChatSlotWidget::UCssChatSlotWidget() {
    this->BP_TabSwitcher = NULL;
    this->BP_ChatTab = NULL;
    this->BP_ChatScrollBox = NULL;
    this->BP_EmoteTab = NULL;
    this->BP_SendMessageBorder = NULL;
    this->BP_SendMessageText = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_ChatBubbleWidgetClass = NULL;
    this->BP_ChatNoticeWidgetClass = NULL;
    this->RightStickScrollScaler = 3.00f;
    this->PlayerSlotIndex = 0;
    this->PlayerController = NULL;
}

void UCssChatSlotWidget::OpenEmoteTab(ARivalsPlayerController* InPlayerController) {
}

void UCssChatSlotWidget::OnReleasedByPlayer(const int32 UserIndex) {
}

void UCssChatSlotWidget::OnPressedByPlayer(const int32 UserIndex) {
}

void UCssChatSlotWidget::OnFocusLostByPlayer(const int32 UserIndex) {
}

void UCssChatSlotWidget::OnFocusedByPlayer(const int32 UserIndex) {
}

bool UCssChatSlotWidget::IsEmoteTabOpen() {
    return false;
}

int32 UCssChatSlotWidget::GetPlayerSlot() {
    return 0;
}

ARivalsPlayerController* UCssChatSlotWidget::GetPlayerController() {
    return NULL;
}

void UCssChatSlotWidget::CloseEmoteTab() {
}






