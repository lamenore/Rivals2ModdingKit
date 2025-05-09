#include "RivalsVfxDefinition.h"

FRivalsVfxDefinition::FRivalsVfxDefinition() {
    this->EffectDuration = 0;
    this->bRotateWithHostBone = false;
    this->bScaleWithHostBone = false;
    this->DetachOnFrame = 0;
    this->bRotateWithHostVelocity = false;
    this->bCanHaveHitpause = false;
    this->bParticlesPersistAfterEarlyDestroy = false;
    this->bMatchHostRivalVisibility = false;
    this->HostLinkage = ERivalsVfxHostLinkage::None;
}

