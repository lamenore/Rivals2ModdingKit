#include "InputHistoryItem.h"

UInputHistoryItem::UInputHistoryItem() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonDisplayerInstance = NULL;
    this->HoldDuration = 0;
    this->BP_DurationText = NULL;
    this->BP_ActionsBox = NULL;
    this->BP_Divider = NULL;
    this->BP_AppearFlairAnim = NULL;
    this->BP_ActionDisplayer_0 = NULL;
    this->BP_ActionDisplayer_1 = NULL;
    this->BP_ActionDisplayer_2 = NULL;
    this->BP_ActionDisplayer_3 = NULL;
    this->BP_ActionDisplayer_4 = NULL;
    this->BP_ActionDisplayer_5 = NULL;
    this->BP_ActionDisplayer_6 = NULL;
    this->BP_ActionDisplayer_7 = NULL;
    this->BP_ActionDisplayer_8 = NULL;
    this->BP_ActionDisplayer_9 = NULL;
}

void UInputHistoryItem::SetFrameDuration(uint32 TotalFrames) {
}

void UInputHistoryItem::SetActions(TArray<ERivalsBufferedInputAction> Actions) {
}

FName UInputHistoryItem::GetStringForAction(ERivalsBufferedInputAction Action) {
    return NAME_None;
}

void UInputHistoryItem::ClearActions() {
}


