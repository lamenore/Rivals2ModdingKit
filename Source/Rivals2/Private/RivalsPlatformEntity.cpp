#include "RivalsPlatformEntity.h"
#include "Components/SceneComponent.h"
#include "RivalsPlatformComponent.h"
#include "RivalsPlatformEntityComponent.h"

ARivalsPlatformEntity::ARivalsPlatformEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->entityComponent = CreateDefaultSubobject<URivalsPlatformEntityComponent>(TEXT("PlatformEntityComponent"));
    this->PlatformComponent = CreateDefaultSubobject<URivalsPlatformComponent>(TEXT("PlatformComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}


