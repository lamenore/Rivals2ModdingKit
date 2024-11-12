#include "SkeletalMeshEffectDefinition.h"

FSkeletalMeshEffectDefinition::FSkeletalMeshEffectDefinition() {
    this->bHasOutline = false;
    this->bHasAura = false;
    this->ShadowMode = ERivalsShadowMode::None;
    this->bUseCustomColors = false;
    this->bInheritStatusVisuals = false;
}

