#include "RivalsPlatformRenderer.h"
#include "SnapNetEntityRendererComponent.h"

ARivalsPlatformRenderer::ARivalsPlatformRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetEntityRendererComponent"));
    this->Window = 0;
    this->WindowTimer = 0;
    this->WindowLength = 0;
    this->HasTrainingPlatform = true;
}

void ARivalsPlatformRenderer::SetTrainingPlatformVisible(bool IsVisible) {
}



