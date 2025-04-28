#include "MainMenuAdButton.h"

UMainMenuAdButton::UMainMenuAdButton() : UUserWidget(FObjectInitializer::Get()) {
    this->bUseURL = false;
    this->bHasPopout = false;
    this->bHasExtraPopout = false;
    this->bHasTop = false;
    this->bHasLoopAnim = false;
    this->bHasParticles = false;
    this->bPreviewParticles = false;
    this->OnHoverParticles = NULL;
    this->OnHoverParticles1 = NULL;
    this->bToggleGlowAspectRatio = false;
    this->AdTexture = NULL;
    this->PopoutTexture = NULL;
    this->TopTexture = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_AdImage = NULL;
    this->BP_PopoutImage = NULL;
    this->BP_TopImage = NULL;
    this->BP_PopoutContainer = NULL;
    this->BP_PopoutExtraContainer = NULL;
    this->BP_TopContainer = NULL;
    this->BP_GlowImage = NULL;
    this->BP_GlowSizeBox = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnHoverParticles = NULL;
    this->BP_OnHoverParticles1 = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_LoopAnim = NULL;
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


