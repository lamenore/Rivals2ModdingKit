#include "Orby.h"

AOrby::AOrby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveSpeed = 1.00f;
    this->OrbyChargeTimer = 0;
    this->MaxOrbyCharge = 59;
    this->OrbyCooldownTimer = 0;
    this->ChargeCooldown = 30;
    this->ChargeMoveWindow = 0;
    this->bLoopingCharge = false;
    this->bIsOnCooldown = false;
    this->bShouldAttackAtTarget = false;
    this->PreviousState = ERivalsOrbyState::None;
    this->LastAttackIndex = 0;
    this->LastImpactStartFrame = 0;
}


