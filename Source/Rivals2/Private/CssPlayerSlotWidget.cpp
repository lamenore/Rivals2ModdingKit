#include "CssPlayerSlotWidget.h"

UCssPlayerSlotWidget::UCssPlayerSlotWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerSlotIndex = 0;
    this->BP_ChangeTypeScaleBox = NULL;
    this->BP_AddCPUScaleBox = NULL;
    this->BP_PlayerRankScaleBox = NULL;
    this->BP_PlayerRankDisplay = NULL;
    this->BP_PlayerSlotOptionsMenu = NULL;
    this->BP_ProfileIconImage = NULL;
    this->IconUpdatingMaterial = NULL;
}

void UCssPlayerSlotWidget::OnUpdatedFromBP() {
}

void UCssPlayerSlotWidget::OnActivatedFromBP() {
}

bool UCssPlayerSlotWidget::IsEditingOptions() const {
    return false;
}

void UCssPlayerSlotWidget::HandleSetPlayerCPU() {
}

void UCssPlayerSlotWidget::HandlePlayerAdded() {
}


