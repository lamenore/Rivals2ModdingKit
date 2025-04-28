#include "PlayerSlotSmall.h"

UPlayerSlotSmall::UPlayerSlotSmall() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_StockIcon = NULL;
    this->BP_StockIconShadow = NULL;
    this->BP_PlayerNumText = NULL;
    this->BP_UsernameText = NULL;
    this->BP_RankDisplay = NULL;
    this->BP_NetworkSignalDisplay = NULL;
    this->BP_PlayerColorOutline = NULL;
    this->BP_PlayerColorDark = NULL;
    this->BP_PlayerColorLight = NULL;
}


