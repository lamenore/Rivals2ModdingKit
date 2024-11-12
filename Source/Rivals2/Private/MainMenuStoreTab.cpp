#include "MainMenuStoreTab.h"

UMainMenuStoreTab::UMainMenuStoreTab() {
    this->BP_StoreClosedTab = NULL;
    this->BP_TabSwitcher = NULL;
    this->BP_FeaturedTabButton = NULL;
    this->BP_EventsTabButton = NULL;
    this->BP_CoinsTabButton = NULL;
    this->BP_BucksTabButton = NULL;
    this->BP_InventoryTabButton = NULL;
    this->BP_BackDisplayer = NULL;
    this->BP_NextTabDisplayer = NULL;
    this->BP_PrevTabDisplayer = NULL;
    this->BP_TabButtonBox = NULL;
    this->BP_PurchaseCurrencyDisplayer = NULL;
}

void UMainMenuStoreTab::OnRedeemButtonReleased(const int32 PlayerIndex) {
}

void UMainMenuStoreTab::OnPurchaseCurrencyButtonReleased(const int32 UserIndex) {
}


