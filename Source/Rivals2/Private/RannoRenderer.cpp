#include "RannoRenderer.h"
#include "Components/SkeletalMeshComponent.h"

ARannoRenderer::ARannoRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->TongueMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TongueMeshComponent"));
    this->TongueOutlineMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TongueOutlineMeshComponent"));
    this->TongueOutlineMeshComponent->SetupAttachment(TongueMeshComponent);
}


