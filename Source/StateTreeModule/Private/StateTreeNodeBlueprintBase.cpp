#include "StateTreeNodeBlueprintBase.h"

UStateTreeNodeBlueprintBase::UStateTreeNodeBlueprintBase() {
    this->CachedOwner = NULL;
}

void UStateTreeNodeBlueprintBase::SendEvent(const FStateTreeEvent& Event) {
}

void UStateTreeNodeBlueprintBase::RequestTransition(const FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority) {
}


