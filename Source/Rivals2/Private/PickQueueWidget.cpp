#include "PickQueueWidget.h"

UPickQueueWidget::UPickQueueWidget() {
    this->BP_StateSwitcher = NULL;
    this->BP_SinglesButton = NULL;
    this->BP_DoublesButton = NULL;
    this->BP_DoublesButton_WithFriend = NULL;
    this->BP_FFAButton = NULL;
    this->BP_DualQueueButton = NULL;
    this->BP_RegionButton = NULL;
    this->BP_CloseButton = NULL;
    this->BP_CancelButton = NULL;
    this->BP_LoadingImage = NULL;
    this->BP_AlertTextBlock = NULL;
    this->BP_Loading = NULL;
}

void UPickQueueWidget::OnQueuingFailed(const FString& QueueName) {
}

void UPickQueueWidget::OnQueueSinglesPressed() {
}

void UPickQueueWidget::OnQueueFFAPressed() {
}

void UPickQueueWidget::OnQueueDoublesWithFriendPressed() {
}

void UPickQueueWidget::OnQueueDoublesPressed() {
}

void UPickQueueWidget::OnMatchmakingTicketCancelled() {
}

void UPickQueueWidget::OnMatchFound() {
}

void UPickQueueWidget::OnJoinMatchSuccess() {
}

void UPickQueueWidget::OnJoinMatchFail() {
}

void UPickQueueWidget::OnEdgegapSessionJoined() {
}

void UPickQueueWidget::OnDualQueuePressed() {
}

void UPickQueueWidget::OnChangeRegionsPressed() {
}

void UPickQueueWidget::OnCancelQueuingSuccess() {
}

void UPickQueueWidget::OnCancelQueuingError() {
}

void UPickQueueWidget::HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}


