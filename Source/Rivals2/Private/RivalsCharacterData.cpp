#include "RivalsCharacterData.h"
#include "RivalsCharacterEntity.h"

URivalsCharacterData::URivalsCharacterData() {
    this->RivalClass = ARivalsCharacterEntity::StaticClass();
    this->HurtboxesSkeletalMesh = NULL;
    this->HurtboxesPhysicsAsset = NULL;
    this->StrongAttackType = ERivalsCharacterStateCategory::GroundOnly;
    this->DacusSpeedMultiplier = 1.00f;
    this->Weight = 0;
    this->EcbBones.AddDefaulted(7);
    this->LandFrames = 4;
    this->FrictionGround = 0.00f;
    this->FrictionAir = 0.00f;
    this->DashFrames = 0;
    this->DashStopFrames = 16;
    this->DashSpeed = 0.00f;
    this->DashAcceleration = 0.00f;
    this->RunSpeedMax = 0.00f;
    this->RunTurnAcceleration = 0.00f;
    this->RunTurnFrames = 12;
    this->WalkAccelerationMax = 0.00f;
    this->WalkSpeedMax = 0.00f;
    this->WalkTurnFrames = 10;
    this->Gravity = 0.00f;
    this->HitstunGravity = 0.00f;
    this->FallSpeedMax = 0.00f;
    this->FastFallSpeed = 0.00f;
    this->AirAcceleration = 0.00f;
    this->AirSpeedHorizontalMax = 0.00f;
    this->JumpSpeedHorizontalMax = 0.00f;
    this->FullHopSpeed = 0.00f;
    this->ShortHopSpeed = 0.00f;
    this->DoubleJumpSpeed = 0.00f;
    this->DoubleJumpMaxHorizontalSpeed = 0.00f;
    this->DoubleJumpSpeedDecay = 0.00f;
    this->MaxDoubleJumps = 1;
    this->PlatdropLandingLockoutFrames = 10;
    this->AirDodgeSpeed = 0.00f;
    this->AirDodgeFriction = 0.00f;
    this->RollSpeed = 0.00f;
    this->AirDodgeWindowFrames.AddDefaulted(4);
    this->ParryWindowFrames.AddDefaulted(4);
    this->SpotDodgeWindowFrames.AddDefaulted(3);
    this->RollWindowFrames.AddDefaulted(3);
    this->ShieldSizeMultiplier = 1.00f;
    this->ShieldOffsetOverride = 0.00f;
    this->LedgeStandSpeed = 0.00f;
    this->LedgeRollSpeed = 0.00f;
    this->LedgeJumpMaxHorizontalAirSpeed = 0.00f;
    this->LedgeStandWindowFrames.AddDefaulted(3);
    this->LedgeRollWindowFrames.AddDefaulted(3);
    this->GetupRollSpeed = 0.00f;
    this->TechRollSpeed = 0.00f;
    this->GetupNeutralWindowFrames.AddDefaulted(2);
    this->GetupRollWindowFrames.AddDefaulted(3);
    this->TechGroundWindowFrames.AddDefaulted(2);
    this->TechRollWindowFrames.AddDefaulted(3);
    this->CanWallCling = false;
    this->CharacterVfxContainerClass = NULL;
    this->SoundEffectContainer = NULL;
    this->TetherUairBoostOverride = 0.00f;
}


