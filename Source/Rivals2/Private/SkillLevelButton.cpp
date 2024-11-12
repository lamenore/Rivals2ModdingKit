#include "SkillLevelButton.h"

USkillLevelButton::USkillLevelButton() : UUserWidget(FObjectInitializer::Get()) {
    this->SkillLevelType = ESkillStartSetting::None;
    this->HoveredMat = NULL;
    this->UnHoveredMat = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_SkillLevelText = NULL;
    this->BP_OuterBorder = NULL;
    this->BP_Character1Image = NULL;
    this->BP_Character2Image = NULL;
    this->BP_Character1SizeBox = NULL;
    this->BP_Character2SizeBox = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->Parent = NULL;
}

void USkillLevelButton::OnUnhover() {
}

void USkillLevelButton::OnReleasedByPlayer(int32 UserIndex) {
}

void USkillLevelButton::OnPressedByPlayer(int32 UserIndex) {
}

void USkillLevelButton::OnLostFocusByPlayer(int32 UserIndex) {
}

void USkillLevelButton::OnHover() {
}

void USkillLevelButton::OnFocusedByPlayer(int32 UserIndex) {
}


