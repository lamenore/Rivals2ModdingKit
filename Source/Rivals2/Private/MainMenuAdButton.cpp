#include "MainMenuAdButton.h"

UMainMenuAdButton::UMainMenuAdButton() : UUserWidget(FObjectInitializer::Get()) {
    this->bUseURL = false;
    this->bHasPopout = false;
    this->bHasTop = false;
    this->bToggleGlowAspectRatio = false;
    this->AdTexture = NULL;
    this->PopoutTexture = NULL;
    this->TopTexture = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_AdImage = NULL;
    this->BP_PopoutImage = NULL;
    this->BP_TopImage = NULL;
    this->BP_PopoutContainer = NULL;
    this->BP_TopContainer = NULL;
    this->BP_GlowImage = NULL;
    this->BP_GlowSizeBox = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->ClickSoundEvent = EMenuSoundType::None;
    this->HoverSoundEvent = EMenuSoundType::None;
}

void UMainMenuAdButton::OnUnhover() {
}

void UMainMenuAdButton::OnReleasedByPlayer(int32 UserIndex) {
}

void UMainMenuAdButton::OnPressedByPlayer(int32 UserIndex) {
}

void UMainMenuAdButton::OnLostFocus(int32 UserIndex) {
}

void UMainMenuAdButton::OnHover() {
}

void UMainMenuAdButton::OnFocus(int32 UserIndex) {
}


