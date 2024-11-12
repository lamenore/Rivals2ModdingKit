#include "RivalsHazardVolumeEntity.h"
#include "Components/BoxComponent.h"

ARivalsHazardVolumeEntity::ARivalsHazardVolumeEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HazardVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Hazard Volume"));
    this->HazardVolume->SetupAttachment(RootComponent);
}


