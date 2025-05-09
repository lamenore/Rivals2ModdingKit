#include "TrainingMenuTabInterface.h"

UTrainingMenuTabInterface::UTrainingMenuTabInterface() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_RowContainer = NULL;
    this->TrainingMenu = NULL;
    this->FocusedRow = NULL;
    this->CurrentController = NULL;
}


