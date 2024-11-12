#include "RivalsButtonEntity.h"
#include "Components/BoxComponent.h"

ARivalsButtonEntity::ARivalsButtonEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
}



