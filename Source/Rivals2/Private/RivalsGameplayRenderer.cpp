#include "RivalsGameplayRenderer.h"

ARivalsGameplayRenderer::ARivalsGameplayRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitializedFromEntity = false;
    this->StateBasedSoundInstances.AddDefaulted(32);
}


