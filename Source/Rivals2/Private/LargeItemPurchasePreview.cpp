#include "LargeItemPurchasePreview.h"

ULargeItemPurchasePreview::ULargeItemPurchasePreview() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ItemImage = NULL;
    this->BP_ItemTextBox = NULL;
    this->BP_RarityImage = NULL;
    this->BP_CurrencyBox = NULL;
    this->BP_CurrencyImage = NULL;
    this->BP_ItemPriceText = NULL;
    this->BP_ItemTypeBox = NULL;
    this->BP_ItemTypeImageRight = NULL;
    this->BP_ItemTypeImageLeft = NULL;
    this->BP_ItemTypeText = NULL;
    this->BP_ConfirmButtonBox = NULL;
    this->BP_ConfirmButton = NULL;
    this->BP_PreviewButtonBox = NULL;
    this->BP_PreviewButton = NULL;
    this->BP_CloseButtonBox = NULL;
    this->BP_CloseButton = NULL;
    this->BP_EmotePreviewBox = NULL;
    this->BP_EmotePreviewImage = NULL;
    this->BP_EmotePreviewText = NULL;
    this->Item = NULL;
}

void ULargeItemPurchasePreview::OnPreviewButtonPressed() {
}

UWidget* ULargeItemPurchasePreview::OnNavigateButtons(EUINavigation InNavigation) {
    return NULL;
}

void ULargeItemPurchasePreview::OnConfirmButtonPressed() {
}

void ULargeItemPurchasePreview::OnCloseButtonPressed() {
}


