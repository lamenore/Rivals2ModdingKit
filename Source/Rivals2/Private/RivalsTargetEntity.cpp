#include "RivalsTargetEntity.h"

ARivalsTargetEntity::ARivalsTargetEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetWindow = 0;
    this->TargetWindowTimer = 0;
    this->bResetOnEnd = false;
    this->bIsMovingTarget = false;
    this->Speed = 0.00f;
}


