#include "TrainingSubsystem.h"

UTrainingSubsystem::UTrainingSubsystem() {
    this->TrainingSettings = NULL;
    this->BaseUIWidget = NULL;
}

void UTrainingSubsystem::SetIsTrainingStage(bool NewIsTrainingStage) {
}

void UTrainingSubsystem::QueueForMatchmaking() {
}

void UTrainingSubsystem::OpenTrainingMode() {
}

void UTrainingSubsystem::OnMatchFound() {
}

bool UTrainingSubsystem::IsTrainingStage() {
    return false;
}

UTrainingModeUIBase* UTrainingSubsystem::GetBaseUIWidget() {
    return NULL;
}

void UTrainingSubsystem::ChangeStageLayout(FName StageName) {
}


