#include "LargeItemPurchasePreview.h"

ULargeItemPurchasePreview::ULargeItemPurchasePreview() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ItemImage = NULL;
    this->BP_ItemTextBox = NULL;
    this->BP_RarityImage = NULL;
    this->BP_CurrencyBox = NULL;
    this->BP_CurrencyImage = NULL;
    this->BP_ItemPriceText = NULL;
    this->BP_ConfirmButtonBox = NULL;
    this->BP_ConfirmButton = NULL;
    this->BP_CloseButtonBox = NULL;
    this->BP_CloseButton = NULL;
    this->BP_EmotePreviewBox = NULL;
    this->BP_EmotePreviewImage = NULL;
    this->BP_EmotePreviewText = NULL;
    this->Item = NULL;
}

UWidget* ULargeItemPurchasePreview::OnNavigateButtons(EUINavigation InNavigation) {
    return NULL;
}

void ULargeItemPurchasePreview::OnConfirmButtonPressed() {
}

void ULargeItemPurchasePreview::OnCloseButtonPressed() {
}

