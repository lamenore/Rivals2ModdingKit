#include "RivalsSpawnPoint.h"
#include "Components/SceneComponent.h"

ARivalsSpawnPoint::ARivalsSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("Rivals Spawn Point"))) {
    this->CompareCharacterSkinDef = NULL;
    this->CompareCharacterDef = NULL;
}


