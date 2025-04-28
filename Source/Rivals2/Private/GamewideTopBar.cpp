#include "GamewideTopBar.h"

UGamewideTopBar::UGamewideTopBar() {
    this->BP_CoinCurrencyDisplayer = NULL;
    this->BP_BuckCurrencyDisplayer = NULL;
    this->BP_MedalCurrencyDisplayer = NULL;
    this->BP_TopBarPlayerSlot = NULL;
    this->BP_PlayerCard = NULL;
    this->BP_BackAreaBorder = NULL;
    this->BP_BackDisplayer = NULL;
    this->BP_BackOnHoverAnim = NULL;
    this->BP_BackOnUnHoverAnim = NULL;
    this->BP_NexusSupportCreatorButton = NULL;
}

void UGamewideTopBar::OnPlayerCardButtonUnhovered() {
}

void UGamewideTopBar::OnPlayerCardButtonReleased(const int32 UserIndex) {
}

void UGamewideTopBar::OnPlayerCardButtonHovered() {
}

void UGamewideTopBar::OnBackAreaButtonUnhovered() {
}

void UGamewideTopBar::OnBackAreaButtonLostFocus(const int32 UserIndex) {
}

void UGamewideTopBar::OnBackAreaButtonHovered() {
}

void UGamewideTopBar::OnBackAreaButtonFocus(const int32 UserIndex) {
}


