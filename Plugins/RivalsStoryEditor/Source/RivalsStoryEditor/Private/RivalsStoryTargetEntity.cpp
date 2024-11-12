#include "RivalsStoryTargetEntity.h"
#include "Components/BoxComponent.h"

ARivalsStoryTargetEntity::ARivalsStoryTargetEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HurtboxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HurtboxShape"));
    this->HurtboxComponent->SetupAttachment(RootComponent);
}

void ARivalsStoryTargetEntity::ChangeState(EAttackTargetEntityState _newState) {
}


