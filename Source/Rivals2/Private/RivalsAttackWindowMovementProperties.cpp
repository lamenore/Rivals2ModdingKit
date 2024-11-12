#include "RivalsAttackWindowMovementProperties.h"

FRivalsAttackWindowMovementProperties::FRivalsAttackWindowMovementProperties() {
    this->Gravity = 0.00f;
    this->MaxFallSpeed = 0.00f;
    this->FrictionGround = 0.00f;
    this->FrictionAir = 0.00f;
    this->CanDrift = ERivalsAirControlType::Default;
    this->AirAcceleration = 0.00f;
    this->AirSpeedHorizontalMax = 0.00f;
    this->CanFallThroughPlatforms = false;
    this->DiminishingReturnsPercentLostPerUse = 0.00f;
}

