#include "ForsburnRenderer.h"
#include "Components/SkeletalMeshComponent.h"

AForsburnRenderer::AForsburnRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->SmokeFullMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SmokeFullMeshComponent"));
    this->SmokescreenOpacity = 0.00f;
    this->MaxSmokescreenOpacity = 1.00f;
    this->SmokeFullMeshComponent->SetupAttachment(CharacterMeshComponent);
}


