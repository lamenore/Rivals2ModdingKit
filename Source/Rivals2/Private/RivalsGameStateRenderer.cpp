#include "RivalsGameStateRenderer.h"
#include "SnapNetEntityRendererComponent.h"

ARivalsGameStateRenderer::ARivalsGameStateRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetEntityRendererComponent"));
    this->PreviouslyRenderedGameplayFrame = -1;
}


