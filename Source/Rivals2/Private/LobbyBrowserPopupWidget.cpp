#include "LobbyBrowserPopupWidget.h"

ULobbyBrowserPopupWidget::ULobbyBrowserPopupWidget() {
    this->BP_RefreshLobbyListLobbyButton = NULL;
    this->BP_CloseButton = NULL;
    this->BP_LobbyEntryContainer = NULL;
    this->BP_LoadingContainer = NULL;
    this->BP_SpinnerText = NULL;
    this->BP_RefreshingAnim = NULL;
    this->WBP_LobbyEntry = NULL;
}

void ULobbyBrowserPopupWidget::RefreshLobbyList() {
}

void ULobbyBrowserPopupWidget::OnSessionsFound(const TArray<FRivalsPlayFabOssSessionInfo>& SessionList) {
}

UWidget* ULobbyBrowserPopupWidget::OnNavigateUpFromBottomBar(EUINavigation NavigationDirection) {
    return NULL;
}

UWidget* ULobbyBrowserPopupWidget::OnNavigateDownFromTopBar(EUINavigation NavigationDirection) {
    return NULL;
}

void ULobbyBrowserPopupWidget::JoinLobbyViaCode() {
}

void ULobbyBrowserPopupWidget::HideSpinnerNoError() {
}

void ULobbyBrowserPopupWidget::HideSpinner(const FName ErrorTypeName) {
}

void ULobbyBrowserPopupWidget::HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}

void ULobbyBrowserPopupWidget::HandleJoinLobbyWithInfo(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}

void ULobbyBrowserPopupWidget::CreatePublicLobby() {
}

void ULobbyBrowserPopupWidget::CreatePrivateLobby() {
}


