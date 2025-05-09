#include "RivalsCharacterAttackData.h"

URivalsCharacterAttackData::URivalsCharacterAttackData() {
    this->GroundedAnimation = NULL;
    this->AerialAnimation = NULL;
    this->Groundedness = ERivalsCharacterStateCategory::GroundOrAir;
    this->LandingLagFrames = 0;
    this->LandingLagAnimation = NULL;
    this->RootedType = ERootedType::None;
    this->BReverseType = EBReverseType::None;
    this->EndInCrouchWhenGrounded = false;
}


