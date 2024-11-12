#include "LobbyPopupWidget.h"

ULobbyPopupWidget::ULobbyPopupWidget() {
    this->BP_QueueLobbyButton = NULL;
    this->BP_ChangeRegionButton = NULL;
    this->BP_ToggleSpectatingButton = NULL;
    this->BP_LeaveLobbyButton = NULL;
    this->BP_CopyCodeButton = NULL;
    this->BP_LoadingImage = NULL;
    this->BP_AlertTextBlock = NULL;
    this->BP_CurrentPlayerCountTextBlock = NULL;
    this->BP_MaxPlayerCountTextBlock = NULL;
    this->BP_LobbyTitleTextBlock = NULL;
    this->BP_Loading = NULL;
    this->BP_LobbyMemberBox = NULL;
    this->BP_SpectatorLobbyNotice = NULL;
    this->WBP_LobbyPlayerEntryWidget = NULL;
}

void ULobbyPopupWidget::SyncLobbyUIStateWithInfo(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}

void ULobbyPopupWidget::SyncLobbyUIState() {
}

void ULobbyPopupWidget::OnToggleSpectatingPressed() {
}

void ULobbyPopupWidget::OnRegionChangePressed() {
}

void ULobbyPopupWidget::OnQueueLobbyPressed() {
}

void ULobbyPopupWidget::OnQueueLobbyDoublesPressed() {
}

void ULobbyPopupWidget::OnLobbyCodeCopyPressed() {
}

void ULobbyPopupWidget::OnLeaveLobbyPressed() {
}

void ULobbyPopupWidget::OnJoinMatchSuccess() {
}

void ULobbyPopupWidget::OnJoinMatchFail() {
}

void ULobbyPopupWidget::OnInviteFriendsPressed() {
}

void ULobbyPopupWidget::HandleUpdateLobbyFailure(TEnumAsByte<RivalsLobbyErrorType> ErrorType) {
}

void ULobbyPopupWidget::HandleLobbyConnectionLost() {
}


