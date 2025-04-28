#include "MainMenuOnlineFriendliesTab.h"

UMainMenuOnlineFriendliesTab::UMainMenuOnlineFriendliesTab() {
    this->BP_CreatePublicButton = NULL;
    this->BP_CreatePrivateButton = NULL;
    this->BP_JoinPublicButton = NULL;
    this->BP_JoinPrivateButton = NULL;
    this->BP_BackButton = NULL;
    this->TextInputPopupWidget = NULL;
    this->SpinnerPopupWidget = NULL;
}

void UMainMenuOnlineFriendliesTab::OnJoinPublicButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnJoinPrivateButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnJoinLobbyFailed(const FName LobbyInfo) {
}

void UMainMenuOnlineFriendliesTab::OnJoinedLobby(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}

void UMainMenuOnlineFriendliesTab::OnFindLobbiesSuccess(const TArray<FRivalsPlayFabOssSessionInfo>& SessionList) {
}

void UMainMenuOnlineFriendliesTab::OnFindLobbiesFailed() {
}

void UMainMenuOnlineFriendliesTab::OnCreatePublicButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnCreatePrivateButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnBackButtonReleased() {
}

void UMainMenuOnlineFriendliesTab::HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}


