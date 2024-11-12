#include "RivalsGameStateEntity.h"
#include "SnapNetEntityComponent.h"

ARivalsGameStateEntity::ARivalsGameStateEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
}

void ARivalsGameStateEntity::PlaceCharactersAtTag(UWorld* World) {
}

void ARivalsGameStateEntity::GoToGameOverLevel() {
}


