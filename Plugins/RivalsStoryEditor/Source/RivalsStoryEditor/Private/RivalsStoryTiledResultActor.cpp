#include "RivalsStoryTiledResultActor.h"
#include "SnapNetEntityComponent.h"
#include "RivalsCollisionMeshComponent.h"

ARivalsStoryTiledResultActor::ARivalsStoryTiledResultActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
    this->CollisionComponent = CreateDefaultSubobject<URivalsCollisionMeshComponent>(TEXT("CollisionMesh"));
}


