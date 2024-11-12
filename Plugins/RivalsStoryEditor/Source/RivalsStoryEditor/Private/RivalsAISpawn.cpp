#include "RivalsAISpawn.h"

ARivalsAISpawn::ARivalsAISpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedEntity = NULL;
    this->BotController = NULL;
    this->PlayerEntity = NULL;
    this->LoadedSkinClass = NULL;
    this->bMatchStarted = false;
}

bool ARivalsAISpawn::Spawn() {
    return false;
}

void ARivalsAISpawn::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ARivalsAISpawn::DestroySpawnedObjects() {
}

bool ARivalsAISpawn::Despawn() {
    return false;
}


