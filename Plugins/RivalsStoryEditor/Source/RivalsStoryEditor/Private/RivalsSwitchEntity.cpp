#include "RivalsSwitchEntity.h"
#include "Components/BoxComponent.h"

ARivalsSwitchEntity::ARivalsSwitchEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->SwitchFlipped = true;
    this->BoxComponent->SetupAttachment(RootComponent);
}






