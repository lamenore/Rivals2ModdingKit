#include "ReplayFavoriteButton.h"

UReplayFavoriteButton::UReplayFavoriteButton() : UUserWidget(FObjectInitializer::Get()) {
    this->ActiveTexture = NULL;
    this->InactiveTexture = NULL;
    this->bIsActive = false;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_BaseImage = NULL;
    this->BP_HoverImage = NULL;
    this->BP_ButtonInteract = NULL;
}

void UReplayFavoriteButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UReplayFavoriteButton::OnPressedByPlayer(const int32 UserIndex) {
}

void UReplayFavoriteButton::OnLostFocus(const int32 UserIndex) {
}

void UReplayFavoriteButton::OnFocus(const int32 UserIndex) {
}


