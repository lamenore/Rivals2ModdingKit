#include "RespawnPlatformRenderer.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ARespawnPlatformRenderer::ARespawnPlatformRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RespawnPlatformMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RespawnPlatformMesh"));
    this->OutlineMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArticleOutlineMeshComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->CanFlip = true;
    this->OutlineMesh->SetupAttachment(RespawnPlatformMesh);
    this->RespawnPlatformMesh->SetupAttachment(RootComponent);
}



