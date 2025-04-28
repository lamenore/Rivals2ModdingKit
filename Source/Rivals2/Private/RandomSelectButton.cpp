#include "RandomSelectButton.h"

URandomSelectButton::URandomSelectButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_ButtonBorder = NULL;
    this->BP_ContentPanel = NULL;
    this->BP_CharacterImage = NULL;
    this->BP_PuckPanel = NULL;
    this->BP_Player1Puck = NULL;
    this->BP_Player2Puck = NULL;
    this->BP_Player3Puck = NULL;
    this->BP_Player4Puck = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_SelectedAnim = NULL;
    this->BP_UnselectedAnim = NULL;
    this->CharacterDefinition = NULL;
    this->ParentScreen = NULL;
}

void URandomSelectButton::OnButtonUnhovered(const int32 UserIndex) {
}

void URandomSelectButton::OnButtonReleased(const int32 UserIndex) {
}

void URandomSelectButton::OnButtonPressed(const int32 UserIndex) {
}

void URandomSelectButton::OnButtonHovered(const int32 UserIndex) {
}


