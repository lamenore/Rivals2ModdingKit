#include "OlympiaRenderer.h"

AOlympiaRenderer::AOlympiaRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
}


