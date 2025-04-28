#include "CompactStateTransition.h"

FCompactStateTransition::FCompactStateTransition() {
    this->ConditionsBegin = 0;
    this->Trigger = EStateTreeTransitionTrigger::None;
    this->Priority = EStateTreeTransitionPriority::None;
    this->Fallback = EStateTreeSelectionFallback::None;
    this->ConditionsNum = 0;
    this->bTransitionEnabled = false;
}

