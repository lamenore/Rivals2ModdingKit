#include "MoltenBoulderRenderer.h"

AMoltenBoulderRenderer::AMoltenBoulderRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
}


