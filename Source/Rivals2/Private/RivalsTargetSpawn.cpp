#include "RivalsTargetSpawn.h"

ARivalsTargetSpawn::ARivalsTargetSpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMovingTarget = false;
    this->bResetOnEnd = false;
}


