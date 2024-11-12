#include "RivalsActiveHitbox.h"

FRivalsActiveHitbox::FRivalsActiveHitbox() {
    this->Attack = ERivalsCharacterAttack::None;
    this->FramesSinceHitboxCreation = 0;
    this->HitboxDurationInFrames = 0;
    this->HitboxID = 0;
}

