#include "MainMenuOnlineFriendliesTab.h"

UMainMenuOnlineFriendliesTab::UMainMenuOnlineFriendliesTab() {
    this->BP_CreatePublicButton = NULL;
    this->BP_CreatePrivateButton = NULL;
    this->BP_JoinPublicButton = NULL;
    this->BP_JoinPrivateButton = NULL;
    this->BP_CreatePublicWorkshopButton = NULL;
    this->BP_CreatePrivateWorkshopButton = NULL;
    this->BP_JoinPublicWorkshopButton = NULL;
    this->BP_JoinPrivateWorkshopButton = NULL;
    this->BP_BackButton = NULL;
    this->TextInputPopupWidget = NULL;
    this->SpinnerPopupWidget = NULL;
}

void UMainMenuOnlineFriendliesTab::OnJoinPublicWorkshopButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnJoinPublicButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnJoinPrivateWorkshopButtonPressed() {
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

void UMainMenuOnlineFriendliesTab::OnCreatePublicWorkshopButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnCreatePublicButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnCreatePrivateWorkshopButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnCreatePrivateButtonPressed() {
}

void UMainMenuOnlineFriendliesTab::OnBackButtonReleased() {
}

void UMainMenuOnlineFriendliesTab::HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}


