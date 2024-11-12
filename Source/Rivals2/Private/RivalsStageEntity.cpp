#include "RivalsStageEntity.h"
#include "SnapNetEntityComponent.h"

ARivalsStageEntity::ARivalsStageEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
}


