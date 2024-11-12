#include "PhasableVolumeEntity.h"

APhasableVolumeEntity::APhasableVolumeEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhaseAlpha = 0.60f;
    this->PhaseMaterial = NULL;
    this->BaseMaterial = NULL;
    this->bWasPhased = false;
    this->Renderer = NULL;
}

bool APhasableVolumeEntity::TogglePhase() {
    return false;
}

void APhasableVolumeEntity::SetPhase(bool _bIsPhased) {
}


