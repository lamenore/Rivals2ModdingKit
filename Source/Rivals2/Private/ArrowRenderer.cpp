#include "ArrowRenderer.h"

AArrowRenderer::AArrowRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->bEmpowered = false;
}


