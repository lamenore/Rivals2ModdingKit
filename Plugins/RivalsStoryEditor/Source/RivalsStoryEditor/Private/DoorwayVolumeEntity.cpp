#include "DoorwayVolumeEntity.h"
#include "RivalsBoxComponent.h"
#include "Templates/SubclassOf.h"

ADoorwayVolumeEntity::ADoorwayVolumeEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadedStageSkinData = NULL;
    this->LoadedWorldPack = NULL;
    this->DoorwayVolume = CreateDefaultSubobject<URivalsBoxComponent>(TEXT("Doorway Volume"));
    this->DoorwayActivated = false;
    this->LoadedRawWorld = false;
    this->DoorwayVolume->SetupAttachment(RootComponent);
}


URivalsStageSkinData* ADoorwayVolumeEntity::GetStageSkinData() {
    return NULL;
}

TArray<TSubclassOf<URivalsStageSkinData>> ADoorwayVolumeEntity::GetAllPossibleStageData() {
    return TArray<TSubclassOf<URivalsStageSkinData>>();
}


