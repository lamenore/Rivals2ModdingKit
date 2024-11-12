#include "RivalsGameplayEntity.h"
#include "Components/SceneComponent.h"

ARivalsGameplayEntity::ARivalsGameplayEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}






