#include "InventoryItemWidget.h"

UInventoryItemWidget::UInventoryItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DefaultBorderMaterial = NULL;
    this->HoveredBorderMaterial = NULL;
    this->DefaultInnerMaterial = NULL;
    this->HoveredInnerMaterial = NULL;
    this->BP_BorderBorder = NULL;
    this->BP_InnerBorder = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_ItemIcon = NULL;
    this->BP_ItemName = NULL;
    this->BP_ItemTypeBorder = NULL;
    this->BP_ItemTypeImage = NULL;
    this->BP_RarityImage = NULL;
    this->EquipmentAsset = NULL;
}

void UInventoryItemWidget::OnReleasedByPlayer(const int32 UserIndex) {
}

UWidget* UInventoryItemWidget::OnNavigateFunc(EUINavigation InNavigation) {
    return NULL;
}

void UInventoryItemWidget::OnLostFocusByPlayer(const int32 UserIndex) {
}

void UInventoryItemWidget::OnFocusedByPlayer(const int32 UserIndex) {
}


