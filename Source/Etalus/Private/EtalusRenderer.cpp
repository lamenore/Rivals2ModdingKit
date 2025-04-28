#include "EtalusRenderer.h"
#include "Components/SkeletalMeshComponent.h"

AEtalusRenderer::AEtalusRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->IceBlockMesh = NULL;
    this->IceBlockAnimation = NULL;
    this->IcePatchMesh = NULL;
    this->IcePatchAnimBlueprint = NULL;
    this->ShieldFreezeMesh = NULL;
    this->ShockwaveMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShockwaveMeshComponent"));
}


