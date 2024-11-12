#include "PlayerSlotIconButton.h"

UPlayerSlotIconButton::UPlayerSlotIconButton() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentTab = NULL;
    this->IconData = NULL;
    this->BP_IconImage = NULL;
    this->BP_HoverBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_ChosenBox = NULL;
}

void UPlayerSlotIconButton::OnUnhovered() {
}

void UPlayerSlotIconButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UPlayerSlotIconButton::OnPressedByPlayer(const int32 UserIndex) {
}

UWidget* UPlayerSlotIconButton::OnNavigateFunc(EUINavigation InNavigation) {
    return NULL;
}

void UPlayerSlotIconButton::OnHovered() {
}

void UPlayerSlotIconButton::OnFocusLostByPlayer(const int32 UserIndex) {
}

void UPlayerSlotIconButton::OnFocusedByPlayer(const int32 UserIndex) {
}


