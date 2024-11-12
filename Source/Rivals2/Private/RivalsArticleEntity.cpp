#include "RivalsArticleEntity.h"
#include "Components/SkeletalMeshComponent.h"
#include "RivalsArticleEntityComponent.h"

ARivalsArticleEntity::ARivalsArticleEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArticleMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArticleMeshComponent"));
    this->entityComponent = CreateDefaultSubobject<URivalsArticleEntityComponent>(TEXT("SnapNetEntityComponent"));
    this->PlatformComponent = NULL;
    this->CachedArticleData = NULL;
    this->ArticleMeshComponent->SetupAttachment(RootComponent);
}


