#include "MainMenuScreenWidget.h"

UMainMenuScreenWidget::UMainMenuScreenWidget() {
    this->BP_TabSwitcher = NULL;
    this->BP_MainMenuHomeTab = NULL;
    this->BP_MainMenuOnlineTab = NULL;
    this->BP_MainMenuStoreTab = NULL;
    this->BP_MainMenuOnlineFriendliesTab = NULL;
    this->BP_MainMenuLocalTab = NULL;
    this->BP_MainMenuTutorialsTab = NULL;
    this->BP_MainMenuTutorialsSubTab = NULL;
    this->BP_MainMenuTrialsSubTab = NULL;
    this->BP_MainMenuExtrasTab = NULL;
    this->BP_MainMenuReplayTab = NULL;
    this->BP_MainMenuProgressionTab = NULL;
    this->BP_MainMenuRankedLeaderboardTab = NULL;
}

void UMainMenuScreenWidget::OpenTrialsSubTab(UUserWidget* WidgetToFocus) {
}

void UMainMenuScreenWidget::OpenProgressionTab(UUserWidget* WidgetToFocus) {
}

void UMainMenuScreenWidget::OpenExtrasTab(UUserWidget* WidgetToFocus) {
}

void UMainMenuScreenWidget::OnTutorialsPressed() {
}

void UMainMenuScreenWidget::OnRefocusScreen() {
}

void UMainMenuScreenWidget::OnLocalPressed() {
}

void UMainMenuScreenWidget::OnJoinLobbyFailed(const FName ErrorTypeName) {
}

void UMainMenuScreenWidget::OnJoinedLobby(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}

void UMainMenuScreenWidget::GoToSettingsHack() {
}

void UMainMenuScreenWidget::GoToHomeTab() {
}



