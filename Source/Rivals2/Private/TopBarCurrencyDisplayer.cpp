#include "TopBarCurrencyDisplayer.h"

UTopBarCurrencyDisplayer::UTopBarCurrencyDisplayer() : UUserWidget(FObjectInitializer::Get()) {
    this->DisplayedCurrencyType = EDisplayedCurrencyType::Bucks;
    this->BP_Zeroes = NULL;
    this->BP_CurrencyAmount = NULL;
    this->BP_IconSwitcher = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_BonusCoinPanel = NULL;
}


