#include "RivalsTriggerEntity.h"
#include "RivalsBoxComponent.h"

ARivalsTriggerEntity::ARivalsTriggerEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<URivalsBoxComponent>(TEXT("RivalsBoxComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
}





