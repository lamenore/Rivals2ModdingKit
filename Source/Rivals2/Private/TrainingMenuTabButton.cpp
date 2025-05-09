#include "TrainingMenuTabButton.h"

UTrainingMenuTabButton::UTrainingMenuTabButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_Background = NULL;
    this->BP_NameText = NULL;
}

void UTrainingMenuTabButton::OnReleasedByPlayer(const int32 Index) {
}


