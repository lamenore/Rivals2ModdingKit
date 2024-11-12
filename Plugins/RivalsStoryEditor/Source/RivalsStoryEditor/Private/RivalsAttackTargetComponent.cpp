#include "RivalsAttackTargetComponent.h"
#include "Components/BoxComponent.h"

URivalsAttackTargetComponent::URivalsAttackTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HurtboxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HurtboxShape"));
}

void URivalsAttackTargetComponent::QueryHitboxes() {
}

void URivalsAttackTargetComponent::OnSnapNetPropertiesModified() {
}

void URivalsAttackTargetComponent::GameplayTick() {
}

void URivalsAttackTargetComponent::ChangeState(EAttackTargetState _newState) {
}


