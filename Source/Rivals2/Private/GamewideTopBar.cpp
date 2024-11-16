#include "GamewideTopBar.h"

UGamewideTopBar::UGamewideTopBar() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ScreenNameTextBox = NULL;
    this->BP_CoinCurrencyDisplayer = NULL;
    this->BP_BuckCurrencyDisplayer = NULL;
    this->BP_TopBarPlayerSlot = NULL;
    this->BP_PlayerCard = NULL;
    this->BP_BackAreaBorder = NULL;
    this->BP_BackAreaButton = NULL;
    this->BP_BackDisplayer = NULL;
    this->BP_BackOnHoverAnim = NULL;
    this->BP_BackOnUnHoverAnim = NULL;
}

void UGamewideTopBar::OnPlayerCardButtonUnhovered() {
}

void UGamewideTopBar::OnPlayerCardButtonReleased(const int32 UserIndex) {
}

void UGamewideTopBar::OnPlayerCardButtonHovered() {
}

void UGamewideTopBar::OnCoinCurrencyButtonReleased(const int32 UserIndex) {
}

void UGamewideTopBar::OnBuckCurrencyButtonReleased(const int32 UserIndex) {
}

void UGamewideTopBar::OnBackAreaButtonUnhovered() {
}

void UGamewideTopBar::OnBackAreaButtonReleased(const int32 UserIndex) {
}

void UGamewideTopBar::OnBackAreaButtonLostFocus(const int32 UserIndex) {
}

void UGamewideTopBar::OnBackAreaButtonHovered() {
}

void UGamewideTopBar::OnBackAreaButtonFocus(const int32 UserIndex) {
}


