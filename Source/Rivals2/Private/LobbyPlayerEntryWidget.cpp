#include "LobbyPlayerEntryWidget.h"

ULobbyPlayerEntryWidget::ULobbyPlayerEntryWidget() {
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_NormalAnim = NULL;
    this->BP_PlayerIcon = NULL;
    this->BP_UsernameTextBlock = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_WidgetSwitcher = NULL;
    this->BP_BGBorder = NULL;
    this->IsEmpty = true;
}

void ULobbyPlayerEntryWidget::OnUnhover(const int32 UserIndex) {
}

void ULobbyPlayerEntryWidget::OnReleasedByPlayer(int32 UserIndex) {
}

void ULobbyPlayerEntryWidget::OnPressed(const int32 UserIndex) {
}

void ULobbyPlayerEntryWidget::OnHover(const int32 UserIndex) {
}

void ULobbyPlayerEntryWidget::OnClicked(const int32 UserIndex) {
}


