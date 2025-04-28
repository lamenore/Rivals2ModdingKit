#include "MatchmakingQueueWidget.h"

UMatchmakingQueueWidget::UMatchmakingQueueWidget() {
    this->BP_RegionPreferencesDisplayer = NULL;
    this->BP_BackDisplayer = NULL;
    this->SpinnerPopupWidget = NULL;
}

void UMatchmakingQueueWidget::OnTicketErrorWithQueue(const FString& InQueue) {
}

void UMatchmakingQueueWidget::OnTicketErrorNoParams() {
}

void UMatchmakingQueueWidget::OnRegionPreferencesButtonReleased(const int32 UserIndex) {
}

void UMatchmakingQueueWidget::OnQueueAllPressed() {
}

void UMatchmakingQueueWidget::OnMatchFound() {
}

void UMatchmakingQueueWidget::OnJoinMatchSuccess() {
}

bool UMatchmakingQueueWidget::IsEnteringTraining() {
    return false;
}

void UMatchmakingQueueWidget::HandleLobbyCreated(const FRivalsPlayFabLobbyInfo LobbyInfo) {
}


