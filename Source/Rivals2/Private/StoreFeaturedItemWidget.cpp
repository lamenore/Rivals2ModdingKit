#include "StoreFeaturedItemWidget.h"

UStoreFeaturedItemWidget::UStoreFeaturedItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_Thumbnail = NULL;
    this->BP_ItemName = NULL;
    this->BP_ItemCoinPriceText = NULL;
    this->BP_ItemBuckPriceText = NULL;
    this->BP_BuckBox = NULL;
    this->BP_CoinBox = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_OuterItemBorder = NULL;
    this->BP_InnerItemBorder = NULL;
    this->BP_OwnedPanel = NULL;
    this->BP_NormalBorderMaterial = NULL;
    this->BP_NormalInnerMaterial = NULL;
    this->BP_HoverBorderMaterial = NULL;
    this->BP_CommonBorderMaterial = NULL;
    this->BP_CommonTextMaterial = NULL;
    this->BP_CommonIconImage = NULL;
    this->BP_RareBorderMaterial = NULL;
    this->BP_RareTextMaterial = NULL;
    this->BP_RareIconImage = NULL;
    this->BP_EpicBorderMaterial = NULL;
    this->BP_EpicTextMaterial = NULL;
    this->BP_EpicIconImage = NULL;
    this->BP_LegendaryBorderMaterial = NULL;
    this->BP_LegendaryTextMaterial = NULL;
    this->BP_LegendaryIconImage = NULL;
}

void UStoreFeaturedItemWidget::OnUnhoverByPlayer(const int32 UserIndex) {
}

void UStoreFeaturedItemWidget::OnReleaseByPlayer(const int32 UserIndex) {
}

UWidget* UStoreFeaturedItemWidget::OnNavigateButtons(EUINavigation InNavigation) {
    return NULL;
}

void UStoreFeaturedItemWidget::OnHoverByPlayer(const int32 UserIndex) {
}


