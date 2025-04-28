#include "ActionSuccessCounter.h"

UActionSuccessCounter::UActionSuccessCounter() : UUserWidget(FObjectInitializer::Get()) {
    this->SizeX = 0.00f;
    this->SizeY = 0.00f;
    this->TextPadding = 0.00f;
    this->BP_CountText = NULL;
    this->BP_ActionIcon = NULL;
    this->BP_SizeBox = NULL;
    this->BP_IconSizeBox = NULL;
    this->BP_NumberChangeAnim = NULL;
}

void UActionSuccessCounter::SetSuccessCount(int32 Count) {
}

void UActionSuccessCounter::SetIcon(ETrainingGameMode GameMode) {
}


