#include "SnapNetCharacterEntity.h"
#include "SnapNetEntityComponent.h"

ASnapNetCharacterEntity::ASnapNetCharacterEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
}

void ASnapNetCharacterEntity::CharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}


