#include "StateTreeTransitionRequest.h"

FStateTreeTransitionRequest::FStateTreeTransitionRequest() {
    this->SourceStateTree = NULL;
    this->Priority = EStateTreeTransitionPriority::None;
}

