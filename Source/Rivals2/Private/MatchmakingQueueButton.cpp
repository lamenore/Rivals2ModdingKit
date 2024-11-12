#include "MatchmakingQueueButton.h"

UMatchmakingQueueButton::UMatchmakingQueueButton() : UUserWidget(FObjectInitializer::Get()) {
    this->QueueType = Singles;
    this->BP_OuterBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->HoveredBorderMaterial = NULL;
    this->DefaultBorderMaterial = NULL;
    this->ParentWidget = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_NormalAnim = NULL;
}

void UMatchmakingQueueButton::OnUnhover() {
}

void UMatchmakingQueueButton::OnReleasedByPlayer(const int32 UserIndex) {
}

void UMatchmakingQueueButton::OnPressedByPlayer(const int32 UserIndex) {
}

void UMatchmakingQueueButton::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UMatchmakingQueueButton::OnHover() {
}

void UMatchmakingQueueButton::OnFocusedByPlayer(const int32 UserIndex) {
}


