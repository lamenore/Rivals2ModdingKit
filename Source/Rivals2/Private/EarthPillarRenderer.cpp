#include "EarthPillarRenderer.h"
#include "Components/SkeletalMeshComponent.h"

AEarthPillarRenderer::AEarthPillarRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->PillarBaseMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PillarBaseMeshComponent"));
    this->PillarBaseOutlineMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PillarBaseOutlineMeshComponent"));
    this->PillarBaseOutlineMeshComponent->SetupAttachment(PillarBaseMeshComponent);
}


