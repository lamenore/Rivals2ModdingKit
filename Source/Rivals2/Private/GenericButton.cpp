#include "GenericButton.h"

UGenericButton::UGenericButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressedAnim = NULL;
    this->BP_OnReleasedAnim = NULL;
}

void UGenericButton::OnButtonUnhovered(const int32 UserIndex) {
}

void UGenericButton::OnButtonReleased(const int32 UserIndex) {
}

void UGenericButton::OnButtonPressed(const int32 UserIndex) {
}

void UGenericButton::OnButtonHovered(const int32 UserIndex) {
}


