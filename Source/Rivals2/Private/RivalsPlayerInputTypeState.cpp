#include "RivalsPlayerInputTypeState.h"

FRivalsPlayerInputTypeState::FRivalsPlayerInputTypeState() {
    this->InputType = ERivalsPlayerInputType::Accept;
    this->Consumed = false;
    this->Value = 0.00f;
}

