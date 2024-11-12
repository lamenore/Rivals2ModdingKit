#include "ConfirmPurchasePopup.h"

UConfirmPurchasePopup::UConfirmPurchasePopup() {
    this->BP_ItemEntry = NULL;
    this->BP_BreakdownSwitcher = NULL;
    this->BP_VirtualBreakdownBox = NULL;
    this->BP_CurrentBalanceCurrencyImage = NULL;
    this->BP_CurrentBalanceTextBlock = NULL;
    this->BP_CostCurrencyImage = NULL;
    this->BP_ItemCostTextBlock = NULL;
    this->BP_NewBalanceCurrencyImage = NULL;
    this->BP_NewBalanceTextBlock = NULL;
    this->BP_RealMoneyBreakdownBox = NULL;
    this->BP_RealCostCurrencyImage = NULL;
    this->BP_RealCostTextBlock = NULL;
    this->BP_ConfirmButton = NULL;
    this->BP_CloseButton = NULL;
}

void UConfirmPurchasePopup::OnConfirmButtonClicked(const int32 UserIndex) {
}

void UConfirmPurchasePopup::OnCloseButtonClicked(const int32 UserIndex) {
}


