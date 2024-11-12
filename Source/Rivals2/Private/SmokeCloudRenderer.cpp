#include "SmokeCloudRenderer.h"
#include "Components/SkeletalMeshComponent.h"

ASmokeCloudRenderer::ASmokeCloudRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->SmokeMaskComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Smoke Mask Component"));
    this->SmokeMaskComponent->SetupAttachment(ArticleMeshComponent);
}


