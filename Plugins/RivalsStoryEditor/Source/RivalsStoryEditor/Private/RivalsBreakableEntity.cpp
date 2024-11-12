#include "RivalsBreakableEntity.h"

ARivalsBreakableEntity::ARivalsBreakableEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StoryVfxContainer = NULL;
    this->BreakVFX = NULL;
    this->Renderer = NULL;
    this->MaxHealth = 1;
    this->QueueBreak = false;
}





