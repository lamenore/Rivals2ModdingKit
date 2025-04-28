#include "InputHistoryWidget.h"

UInputHistoryWidget::UInputHistoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentItem = NULL;
    this->NextItemIndex = 0;
    this->CurrentFrame = 0;
    this->PreviousFrame = 0;
    this->CurrentInput = 0;
    this->PreviousInput = 0;
    this->BP_HistoryItemInstance = NULL;
    this->BP_HistoryCanvas = NULL;
    this->BP_InputList = NULL;
}

void UInputHistoryWidget::OnMatchRestarted(ERivalsSessionState SessionState) {
}


