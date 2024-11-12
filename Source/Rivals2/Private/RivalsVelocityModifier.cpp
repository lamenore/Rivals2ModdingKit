#include "RivalsVelocityModifier.h"

FRivalsVelocityModifier::FRivalsVelocityModifier() {
    this->ModifierInput = ERivalsVelocityModifierInput::Forward;
    this->ModifierVelocityType = ERivalsVelocityType::None;
    this->AngleChange = 0.00f;
}

