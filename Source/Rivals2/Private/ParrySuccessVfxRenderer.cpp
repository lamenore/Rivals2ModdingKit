#include "ParrySuccessVfxRenderer.h"

AParrySuccessVfxRenderer::AParrySuccessVfxRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
}


