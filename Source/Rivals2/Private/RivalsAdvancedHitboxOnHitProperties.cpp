#include "RivalsAdvancedHitboxOnHitProperties.h"

FRivalsAdvancedHitboxOnHitProperties::FRivalsAdvancedHitboxOnHitProperties() {
    this->SpecialEffect = ERivalsHitboxEffect::None;
    this->HitpauseMultiplier = 0.00f;
    this->ExtraHitpauseForOpponent = 0;
    this->HitpauseMovementType = ERivalsHitpauseMovementType::None;
    this->HitpauseMovementStrength = 0.00f;
    this->SDIMultiplier = 0.00f;
    this->ASDIMultiplier = 0.00f;
    this->bCanReverse = false;
    this->bForceFlinch = false;
    this->GroundTechable = false;
    this->bIgnoresWeight = false;
    this->bAutoFloorhuggable = false;
    this->ProjectileInteraction = ERivalsProjectileInteraction::Default;
    this->bForceKnockbackInKnockdown = false;
    this->bPreserveFacing = false;
    this->KnockbackAngleMode = ERivalsKnockbackAngleMode::SpecifiedAngle;
    this->HitstunMultiplier = 0.00f;
    this->HitfallHitstunMultiplier = 0.00f;
    this->ParryReaction = ERivalsParryReaction::Stun;
    this->GrabPartnerInteraction = ERivalsHitboxGrabPartnerInteraction::None;
    this->ExtraShieldStun = 0;
    this->ShieldDamageMultiplier = 0.00f;
    this->ShieldPushbackMultiplier = 0.00f;
    this->ShieldHitpauseMultiplier = 0.00f;
    this->FullChargeKnockbackMultiplier = 0.00f;
    this->FullChargeDamageMultiplier = 0.00f;
    this->FinalBaseKnockback = 0.00f;
    this->ForceTumble = false;
    this->IgnoreKnockbackArmor = false;
    this->PreventChaingrabsOnHit = false;
    this->HitstunAnimationStateOverride = ERivalsCharacterState::None;
}

