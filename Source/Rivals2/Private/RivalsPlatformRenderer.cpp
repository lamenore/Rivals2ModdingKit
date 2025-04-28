#include "RivalsPlatformRenderer.h"
#include "SnapNetEntityRendererComponent.h"

ARivalsPlatformRenderer::ARivalsPlatformRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetEntityRendererComponent"));
    this->Window = 0;
    this->WindowTimer = 0;
    this->WindowLength = 0;
    this->HasTrainingPlatform = true;
    this->bTrainingPlatformVisible = false;
}

void ARivalsPlatformRenderer::SetTrainingPlatformVisible(bool IsVisible) {
}


bool ARivalsPlatformRenderer::IsTrainingPlatformVisible() {
    return false;
}

TArray<UStaticMeshComponent*> ARivalsPlatformRenderer::GetTrainingPlatMeshComponents() {
    return TArray<UStaticMeshComponent*>();
}

TArray<USkeletalMeshComponent*> ARivalsPlatformRenderer::GetPlatSkeletalMeshComponents() {
    return TArray<USkeletalMeshComponent*>();
}

TArray<UStaticMeshComponent*> ARivalsPlatformRenderer::GetPlatMeshComponents() {
    return TArray<UStaticMeshComponent*>();
}


