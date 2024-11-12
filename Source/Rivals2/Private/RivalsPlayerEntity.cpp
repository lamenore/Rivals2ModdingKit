#include "RivalsPlayerEntity.h"
#include "RivalsEntityComponent.h"

ARivalsPlayerEntity::ARivalsPlayerEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URivalsEntityComponent>(TEXT("RivalsEntityComponent"))) {
    this->CachedCharacterDefinition = NULL;
    this->CachedSkinDefinition = NULL;
}

void ARivalsPlayerEntity::SetSkinAndCharacterDefinition(const URivalsCharacterSkinDefinition* SkinDefinition) {
}

bool ARivalsPlayerEntity::IsTransient() {
    return false;
}


