#include "TutorialSpike.h"

ATutorialSpike::ATutorialSpike(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRunningSpike = false;
    this->SpikeTimer = 0.00f;
    this->ExtendTime = 0.25f;
    this->RetractTime = 0.80f;
}

void ATutorialSpike::RetractSpike() {
}

bool ATutorialSpike::IsRivalRunning(ARivalsCharacterEntity* CharacterEntity) {
    return false;
}

bool ATutorialSpike::IsExtended() {
    return false;
}

void ATutorialSpike::ExtendSpike(bool IsRunning) {
}


