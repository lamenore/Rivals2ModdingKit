#include "PlayerSlotPlatformButton.h"

UPlayerSlotPlatformButton::UPlayerSlotPlatformButton() : UUserWidget(FObjectInitializer::Get()) {
    this->PlatformData = NULL;
    this->ParentTab = NULL;
    this->BP_IconImage = NULL;
    this->BP_HoverBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_ChosenBox = NULL;
}

void UPlayerSlotPlatformButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UPlayerSlotPlatformButton::OnPressedByPlayer(const int32 UserIndex) {
}

UWidget* UPlayerSlotPlatformButton::OnNavigateFunc(EUINavigation InNavigation) {
    return NULL;
}

void UPlayerSlotPlatformButton::OnFocusLostByPlayer(const int32 UserIndex) {
}

void UPlayerSlotPlatformButton::OnFocusedByPlayer(const int32 UserIndex) {
}


