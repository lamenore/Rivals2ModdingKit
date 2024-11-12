#include "StockIconWidget.h"

UStockIconWidget::UStockIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SkinDefinition = NULL;
    this->ColorSlotData = NULL;
    this->BP_IconImage = NULL;
}

UMaterialInterface* UStockIconWidget::GetStockIconMaterial() const {
    return NULL;
}


