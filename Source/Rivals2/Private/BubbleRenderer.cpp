#include "BubbleRenderer.h"

ABubbleRenderer::ABubbleRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->OriginalBubbleMesh = NULL;
    this->AlternateBubbleMesh = NULL;
}


