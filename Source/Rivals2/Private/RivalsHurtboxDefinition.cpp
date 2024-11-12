#include "RivalsHurtboxDefinition.h"

FRivalsHurtboxDefinition::FRivalsHurtboxDefinition() {
    this->HurtboxDefinitionType = ERivalsHurtboxDefinitionType::Existing;
    this->HurtboxRadius = 0.00f;
    this->HurtboxDefaultState = ERivalsHurtboxState::Vulnerable;
    this->HurtboxActive = false;
    this->bIsTemporary = false;
}

