#include "RivalsSkeletalMeshEffectComponent.h"

URivalsSkeletalMeshEffectComponent::URivalsSkeletalMeshEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponent = NULL;
    this->OutlineMeshComponent = NULL;
    this->AuraMeshComponent = NULL;
    this->bHasOutline = false;
    this->bHasAura = false;
    this->bInitializedOutline = false;
}


