#include "RivalsEyeBreakEntity.h"

ARivalsEyeBreakEntity::ARivalsEyeBreakEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsFalling = false;
}

bool ARivalsEyeBreakEntity::IsFalling() {
    return false;
}

void ARivalsEyeBreakEntity::BounceEye() {
}


