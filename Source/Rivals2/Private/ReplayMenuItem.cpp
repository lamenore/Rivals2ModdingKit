#include "ReplayMenuItem.h"

UReplayMenuItem::UReplayMenuItem() : UUserWidget(FObjectInitializer::Get()) {
    this->ParentMenu = NULL;
    this->BP_StockIconHorizontalBox = NULL;
    this->BP_P1StockIcon = NULL;
    this->BP_P2StockIcon = NULL;
    this->BP_P3StockIcon = NULL;
    this->BP_P4StockIcon = NULL;
    this->BP_StageImage = NULL;
    this->BP_TitleText = NULL;
    this->BP_MatchTypeImage = NULL;
    this->BP_MatchTypeText = NULL;
    this->BP_TimeText = NULL;
    this->BP_FavoriteButton = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
}

void UReplayMenuItem::OnReleasedByPlayer(const int32 UserIndex) {
}

void UReplayMenuItem::OnPressedByPlayer(const int32 UserIndex) {
}

void UReplayMenuItem::OnLostFocus(const int32 UserIndex) {
}

void UReplayMenuItem::OnFocus(const int32 UserIndex) {
}

UWidget* UReplayMenuItem::OnCustomNavigate(EUINavigation InNavigation) {
    return NULL;
}

void UReplayMenuItem::OnAction4ReleasedByPlayer(const int32 UserIndex) {
}

void UReplayMenuItem::OnAction3ReleasedByPlayer(const int32 UserIndex) {
}


