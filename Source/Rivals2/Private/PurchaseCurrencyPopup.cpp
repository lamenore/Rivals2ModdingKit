#include "PurchaseCurrencyPopup.h"

UPurchaseCurrencyPopup::UPurchaseCurrencyPopup() {
    this->MaxItemsPerRow = 4;
    this->BP_TitleText = NULL;
    this->BP_ItemGrid = NULL;
    this->BP_StoreItemInstance = NULL;
    this->BP_CloseButton = NULL;
    this->BP_CreatorSupportButton = NULL;
}

void UPurchaseCurrencyPopup::OnClosePressed(int32 UserIndex) {
}


