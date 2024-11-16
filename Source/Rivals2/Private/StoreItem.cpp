#include "StoreItem.h"

UStoreItem::UStoreItem() : UUserWidget(FObjectInitializer::Get()) {
    this->AssetData = NULL;
    this->DefaultBorderMaterial = NULL;
    this->HoveredBorderMaterial = NULL;
    this->DefaultInnerMaterial = NULL;
    this->HoverInnerMaterial = NULL;
    this->BP_ItemIconScaleBox = NULL;
    this->BP_RarityIconBorder = NULL;
    this->BP_BorderBorder = NULL;
    this->BP_InnerBorder = NULL;
    this->BP_ItemIconBox = NULL;
    this->BP_LoadingImage = NULL;
    this->BP_ItemIcon = NULL;
    this->BP_ItemTypeBorder = NULL;
    this->BP_ItemTypeImage = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnHoverAnimBig = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_OnUnHoverAnimBig = NULL;
    this->BP_OnPressAnim = NULL;
    this->BP_OnReleaseAnim = NULL;
    this->BP_IconBG = NULL;
    this->BP_RarityImage = NULL;
    this->BP_ItemNameBox = NULL;
    this->BP_ItemName = NULL;
    this->BP_ItemNameBoxBig = NULL;
    this->BP_ItemNameBig = NULL;
    this->BP_CurrencyBox = NULL;
    this->BP_ItemTypeText = NULL;
    this->BP_CoinImage = NULL;
    this->BP_ItemPriceText = NULL;
    this->BP_OwnedPanel = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_RarityPanel = NULL;
    this->BP_RotationBox = NULL;
}

void UStoreItem::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UStoreItem::OnReleaseByPlayer(const int32 UserIndex) {
}

UWidget* UStoreItem::OnNavigateButtons(EUINavigation InNavigation) {
    return NULL;
}

void UStoreItem::OnHoverByPlayer(const int32 UserIndex) {
}

void UStoreItem::BP_OnHoverAnimFinished() {
}


