#include "OrcaneRenderer.h"

AOrcaneRenderer::AOrcaneRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->BellyFillVisualAlpha = 0.00f;
}


