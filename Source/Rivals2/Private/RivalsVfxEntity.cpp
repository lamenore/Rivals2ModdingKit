#include "RivalsVfxEntity.h"
#include "Components/SceneComponent.h"
#include "RivalsVfxEntityComponent.h"

ARivalsVfxEntity::ARivalsVfxEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->entityComponent = CreateDefaultSubobject<URivalsVfxEntityComponent>(TEXT("RivalsVfxEntityComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}


