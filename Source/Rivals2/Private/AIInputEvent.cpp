#include "AIInputEvent.h"

FAIInputEvent::FAIInputEvent() {
    this->GameplayFrameInput = 0;
    this->FramesToHoldInput = 0;
    this->InputAxisValue = 0.00f;
    this->InputActionValue = false;
}

