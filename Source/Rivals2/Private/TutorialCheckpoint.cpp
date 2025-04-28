#include "TutorialCheckpoint.h"

ATutorialCheckpoint::ATutorialCheckpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractRange = 25.00f;
    this->bSetOrbyLocation = false;
    this->bCheckAbove = true;
    this->bAdvanceTutorialStage = false;
}

void ATutorialCheckpoint::SetOrbyLocation() {
}

FVector2D ATutorialCheckpoint::GetRivalPosition(int32 Slot) {
    return FVector2D{};
}


