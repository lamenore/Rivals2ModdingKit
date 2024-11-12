#include "ThrowKnockbackData.h"

FThrowKnockbackData::FThrowKnockbackData() {
    this->Damage = 0;
    this->BaseKnockback = 0.00f;
    this->KnockbackScaling = 0.00f;
    this->KnockbackAngle = 0;
    this->HitstunMultiplier = 0.00f;
    this->bTechable = false;
    this->ForceTumble = false;
    this->HitstunAnimationStateOverride = ERivalsCharacterState::None;
}

