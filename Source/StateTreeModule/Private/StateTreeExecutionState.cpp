#include "StateTreeExecutionState.h"

FStateTreeExecutionState::FStateTreeExecutionState() {
    this->LastTickStatus = EStateTreeRunStatus::Running;
    this->TreeRunStatus = EStateTreeRunStatus::Running;
    this->RequestedStop = EStateTreeRunStatus::Running;
    this->CurrentPhase = EStateTreeUpdatePhase::Unset;
    this->StateChangeCount = 0;
}

