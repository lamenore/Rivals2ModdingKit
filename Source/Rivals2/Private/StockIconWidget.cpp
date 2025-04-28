#include "StockIconWidget.h"

UStockIconWidget::UStockIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SkinDefinition = NULL;
    this->ColorSlotData = NULL;
    this->BP_IconImage = NULL;
}

void UStockIconWidget::SetStockIconMaterialWithColorSlotData(URivalsColorSlotData* InColorSlotData, bool Sync) {
}

UMaterialInterface* UStockIconWidget::GetStockIconMaterial(bool Sync) const {
    return NULL;
}


