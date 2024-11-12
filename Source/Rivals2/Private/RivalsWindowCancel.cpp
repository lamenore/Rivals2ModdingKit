#include "RivalsWindowCancel.h"

FRivalsWindowCancel::FRivalsWindowCancel() {
    this->WindowCancelType = ERivalsWindowCancelType::None;
    this->WindowCancelFrame = 0;
    this->WindowCancelLengthFrames = 0;
    this->WindowCancelPrerequisite = ERivalsWindowCancelPrerequisite::None;
    this->CancellableWhenParried = false;
    this->bPreseveWindowTimer = false;
    this->CancelIntoAttack = ERivalsCharacterAttack::None;
    this->bConsumeCancelInput = false;
}

