#include "GameRuleIconDisplayer.h"

UGameRuleIconDisplayer::UGameRuleIconDisplayer() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->IconTexture = NULL;
    this->IconSize = 0.00f;
    this->BP_ImageSizeBox = NULL;
    this->BP_IconImage = NULL;
    this->BP_TextScaleBox = NULL;
    this->BP_TextBox = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UGameRuleIconDisplayer::OnUnhover() {
}

void UGameRuleIconDisplayer::OnReleasedByPlayer(const int32 UserIndex) {
}

void UGameRuleIconDisplayer::OnPressedByPlayer(const int32 UserIndex) {
}

void UGameRuleIconDisplayer::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UGameRuleIconDisplayer::OnHover() {
}

void UGameRuleIconDisplayer::OnFocusedByPlayer(const int32 UserIndex) {
}


