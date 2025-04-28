#include "TargetDisplayObject.h"

UTargetDisplayObject::UTargetDisplayObject() {
    this->SizeX = 0.00f;
    this->SizeY = 0.00f;
    this->EntryAnimDelayAmount = 0.00f;
    this->EntryAnimDelayIndex = 0;
    this->BP_EntryAnim = NULL;
    this->BP_BreakAnim = NULL;
    this->BP_SizeBox = NULL;
}

void UTargetDisplayObject::PlayOnEntryAnim() {
}


