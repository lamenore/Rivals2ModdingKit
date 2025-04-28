#include "RivalCaptureAnim.h"

FRivalCaptureAnim::FRivalCaptureAnim() {
    this->AnimPos = 0.00f;
    this->bLooping = false;
    this->Animation = NULL;
    this->bIsCharSFX = false;
    this->CurrentFrame = 0;
    this->LastUncheckedFrame = 0;
    this->ElapsedTime = 0.00f;
}

