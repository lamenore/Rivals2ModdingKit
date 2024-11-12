#include "StageButtonWidget.h"

UStageButtonWidget::UStageButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsRandom = false;
    this->StageData = NULL;
    this->ParentStageSelect = NULL;
    this->StageButtonState = ERivalsStageState::None;
    this->BP_BanImage = NULL;
    this->BP_StrikeImage = NULL;
    this->BP_Shroud = NULL;
    this->BP_ButtonInteract = NULL;
    this->BP_StagePreview = NULL;
    this->BP_RandomContainer = NULL;
}

void UStageButtonWidget::SyncRandomVisuals() {
}

void UStageButtonWidget::SyncButtonVisuals() {
}

void UStageButtonWidget::OnReleasedByPlayer(const int32 UserIndex) {
}

void UStageButtonWidget::OnAction4Released(const int32 LocalPlayerIndex) {
}


