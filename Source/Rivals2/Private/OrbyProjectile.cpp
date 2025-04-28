#include "OrbyProjectile.h"

AOrbyProjectile::AOrbyProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastLerpAlpha = 0.00f;
    this->bHasTarget = false;
    this->bHit = false;
    this->bParried = false;
    this->bShielded = false;
    this->ProjectileSpeed = 13.00f;
    this->TotalLifetime = 2.50f;
    this->LifeTimer = 0.00f;
}


