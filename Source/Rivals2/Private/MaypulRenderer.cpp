#include "MaypulRenderer.h"
#include "Components/PoseableMeshComponent.h"

AMaypulRenderer::AMaypulRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->TetherMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("TongueMeshComponent"));
    this->TetherOutlineMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("TongueOutlineMeshComponent"));
    this->TetherOutlineMeshComponent->SetupAttachment(TetherMeshComponent);
}


