#include "RivalsCharacterEntity.h"
#include "Components/SkeletalMeshComponent.h"
#include "RivalsCharacterEntityComponent.h"

ARivalsCharacterEntity::ARivalsCharacterEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TakingInputs = true;
    this->CharacterMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMeshComponent"));
    this->entityComponent = CreateDefaultSubobject<URivalsCharacterEntityComponent>(TEXT("SnapNetEntityComponent"));
    this->CachedCharacterDefinition = NULL;
    this->CharacterMeshComponent->SetupAttachment(RootComponent);
}

void ARivalsCharacterEntity::TakeInputs(bool _takeInputs) {
}



ERivalsHitboxHitResponse ARivalsCharacterEntity::GetHitboxResponse(const FRivalsActiveHitbox& HitBox) {
    return ERivalsHitboxHitResponse::Hit;
}


