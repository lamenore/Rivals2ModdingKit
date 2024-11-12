#include "RivalsStageRenderer.h"
#include "SnapNetEntityRendererComponent.h"

ARivalsStageRenderer::ARivalsStageRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetEntityRendererComponent"));
}


