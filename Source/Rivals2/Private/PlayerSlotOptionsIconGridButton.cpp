#include "PlayerSlotOptionsIconGridButton.h"

UPlayerSlotOptionsIconGridButton::UPlayerSlotOptionsIconGridButton() : UUserWidget(FObjectInitializer::Get()) {
    this->EquipmentData = NULL;
    this->ParentTab = NULL;
    this->BP_IconImage = NULL;
    this->BP_HoverBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_ChosenBox = NULL;
}

void UPlayerSlotOptionsIconGridButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UPlayerSlotOptionsIconGridButton::OnPressedByPlayer(const int32 UserIndex) {
}

UWidget* UPlayerSlotOptionsIconGridButton::OnNavigateFunc(EUINavigation InNavigation) {
    return NULL;
}

void UPlayerSlotOptionsIconGridButton::OnFocusLostByPlayer(const int32 UserIndex) {
}

void UPlayerSlotOptionsIconGridButton::OnFocusedByPlayer(const int32 UserIndex) {
}


