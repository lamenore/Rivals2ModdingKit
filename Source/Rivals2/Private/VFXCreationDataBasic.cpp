#include "VFXCreationDataBasic.h"

FVFXCreationDataBasic::FVFXCreationDataBasic() {
    this->GroundedConditions = ERivalsCharacterStateCategory::GroundOnly;
    this->OtherConditions = ERivalsVfxCreationCondition::None;
    this->NegateOtherCondition = false;
}

