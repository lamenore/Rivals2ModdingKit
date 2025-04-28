#include "StateTreeTransitionResult.h"

FStateTreeTransitionResult::FStateTreeTransitionResult() {
    this->CurrentRunStatus = EStateTreeRunStatus::Running;
    this->ChangeType = EStateTreeStateChangeType::None;
    this->Priority = EStateTreeTransitionPriority::None;
    this->SourceStateTree = NULL;
}

