#include "RivalsCollisionMeshComponent.h"

URivalsCollisionMeshComponent::URivalsCollisionMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->hasLedges = true;
    this->bDisabledOnInvuln = false;
    this->PrimaryPlatform = false;
}

void URivalsCollisionMeshComponent::RecreatePlatformComponents() {
}

TArray<ARivalsPlatformEntity*> URivalsCollisionMeshComponent::GetPlatformEntities() {
    return TArray<ARivalsPlatformEntity*>();
}

void URivalsCollisionMeshComponent::CompilePlatformData() {
}


