#include "HordeStockDisplayWidget.h"

UHordeStockDisplayWidget::UHordeStockDisplayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ArcadeModeSubsystem = NULL;
    this->StockCount = 0;
    this->BP_StockIcon = NULL;
    this->BP_StockCount = NULL;
    this->StockIconInitialized = false;
}

void UHordeStockDisplayWidget::SetStockCount(int32 NewStockCount) {
}

void UHordeStockDisplayWidget::InitStockIcon(URivalsCharacterSkinDefinition* Skin, URivalsColorSlotData* ColorSlotData) {
}

void UHordeStockDisplayWidget::GetHordeCpuCharacter() {
}


