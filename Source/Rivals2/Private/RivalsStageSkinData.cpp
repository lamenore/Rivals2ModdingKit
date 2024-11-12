#include "RivalsStageSkinData.h"
#include "RivalsStageEntity.h"

URivalsStageSkinData::URivalsStageSkinData() {
    this->ExcludeFromBuild = true;
    this->StageClass = ARivalsStageEntity::StaticClass();
    this->LastStockTransitionFrames = 120;
    this->SoundEffectContainer = NULL;
    this->VfxDefinitionContainer = NULL;
    this->bDrawStageCollision = false;
}


