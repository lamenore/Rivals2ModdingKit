#include "RivalsDialogueTrigger.h"

ARivalsDialogueTrigger::ARivalsDialogueTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogueGroup = NULL;
    this->bShowChar = false;
    this->bEndLevel = false;
    this->bCanRepeat = false;
    this->bCheckAbove = false;
    this->bSetOrbyLocation = false;
    this->InteractRange = 25.00f;
}

FVector2D ARivalsDialogueTrigger::GetRivalPosition(int32 Slot) {
    return FVector2D{};
}


