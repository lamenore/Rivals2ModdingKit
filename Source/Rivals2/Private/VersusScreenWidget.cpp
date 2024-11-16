#include "VersusScreenWidget.h"

UVersusScreenWidget::UVersusScreenWidget() {
    this->CurrentStageSkin = NULL;
    this->bIsInitialized = false;
}

void UVersusScreenWidget::OnInitSessionState(const ERivalsSessionState SessionState) {
}

bool UVersusScreenWidget::IsPlayerActive(const int32& PlayerSlot) const {
    return false;
}

bool UVersusScreenWidget::IsOnlineMatch() const {
    return false;
}

bool UVersusScreenWidget::IsLobbyMatch() const {
    return false;
}


int32 UVersusScreenWidget::GetWinCountForPlayer(const int32& PlayerSlot) const {
    return 0;
}

URivalsStageSkinData* UVersusScreenWidget::GetStageSkinData() const {
    return NULL;
}

ERivalsColorSlot UVersusScreenWidget::GetPlayerTeam(const int32& PlayerSlot) const {
    return ERivalsColorSlot::None;
}

int32 UVersusScreenWidget::GetPlayerSlotForPlayerController(APlayerController* InController) {
    return 0;
}

FText UVersusScreenWidget::GetPlayerName(const int32& PlayerSlot) const {
    return FText::GetEmpty();
}

FVersusScreenPlayerInfo UVersusScreenWidget::GetPlayerInfo(const int32& PlayerSlot) const {
    return FVersusScreenPlayerInfo{};
}

ARivalsPlayerController* UVersusScreenWidget::GetPlayerControllerForSlot(const int32& PlayerSlot) {
    return NULL;
}

TArray<int32> UVersusScreenWidget::GetActivePlayerSlots() const {
    return TArray<int32>();
}


