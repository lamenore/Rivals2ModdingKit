#include "LoxodontRenderer.h"
#include "Components/SkeletalMeshComponent.h"

ALoxodontRenderer::ALoxodontRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->MoltenChargeMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MoltenChargeMeshComponent"));
    this->MoltenChargeVisualLevel = 0.00f;
    this->MoltenChargeMeshComponent->SetupAttachment(CharacterMeshComponent);
}


