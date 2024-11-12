#include "RivalsCameraVolume.h"
#include "Components/BoxComponent.h"
#include "RivalsCameraVolumeVisual.h"

ARivalsCameraVolume::ARivalsCameraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLimitToBounds = false;
    this->RivalsCamera = NULL;
    this->FollowActor = NULL;
    this->CamVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CamVolume"));
    this->CamVisual = CreateDefaultSubobject<URivalsCameraVolumeVisual>(TEXT("CamVisualizer"));
}


