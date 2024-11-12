#include "RivalsArticleWindowAdvancedProperties.h"

FRivalsArticleWindowAdvancedProperties::FRivalsArticleWindowAdvancedProperties() {
    this->bVisible = false;
    this->bEcbEnabled = false;
    this->bArticlePlatformEnabled = false;
    this->Gravity = 0.00f;
    this->MaxFallSpeed = 0.00f;
    this->FrictionGround = 0.00f;
    this->FrictionAir = 0.00f;
    this->bCanFallThroughPlatforms = false;
    this->bCanBeHitByHitboxesThatCantHitProjectiles = false;
    this->bCreateDestroyVfxAtEndOfWindow = false;
}

