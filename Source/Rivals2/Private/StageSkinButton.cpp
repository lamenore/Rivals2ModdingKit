#include "StageSkinButton.h"

UStageSkinButton::UStageSkinButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_StageImage = NULL;
    this->BP_OuterBorder = NULL;
    this->BP_OuterBorderDark = NULL;
    this->BP_SkinNotOwnedBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->ParentStageSelect = NULL;
}

void UStageSkinButton::OnUnhoveredByPlayer(const int32 UserIndex) {
}

void UStageSkinButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UStageSkinButton::OnPressedByPlayer(const int32 UserIndex) {
}

void UStageSkinButton::OnHoveredByPlayer(const int32 UserIndex) {
}


