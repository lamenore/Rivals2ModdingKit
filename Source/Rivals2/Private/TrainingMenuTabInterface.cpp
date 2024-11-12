#include "TrainingMenuTabInterface.h"

UTrainingMenuTabInterface::UTrainingMenuTabInterface() : UUserWidget(FObjectInitializer::Get()) {
    this->TrainingMenuParent = NULL;
    this->CurrentController = NULL;
}


