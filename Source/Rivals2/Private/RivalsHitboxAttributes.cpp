#include "RivalsHitboxAttributes.h"

FRivalsHitboxAttributes::FRivalsHitboxAttributes() {
    this->bClampToGameplayPlane = false;
    this->InitialInterpolationMode = EHitboxInitialInterpolationMode::None;
    this->UseCurrentFrameForInterpolation = false;
    this->Radius = 0.00f;
    this->CanRehitAfterXFrames = 0;
    this->HitResponse = ERivalsHitboxHitResponse::Hit;
    this->CanHitgrabKnockedDownOpponents = false;
    this->Groundedness = ERivalsCharacterStateCategory::GroundOnly;
    this->bNeverHitTeammates = false;
}

