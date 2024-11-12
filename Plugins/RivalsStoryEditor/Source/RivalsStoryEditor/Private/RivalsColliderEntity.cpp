#include "RivalsColliderEntity.h"
#include "SnapNetEntityComponent.h"
#include "RivalsCollisionMeshComponent.h"

ARivalsColliderEntity::ARivalsColliderEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshCollision = CreateDefaultSubobject<URivalsCollisionMeshComponent>(TEXT("CollisionMesh"));
    this->RenderActor = NULL;
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
    this->MeshCollision->SetupAttachment(RootComponent);
}



