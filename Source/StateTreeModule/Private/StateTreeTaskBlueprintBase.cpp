#include "StateTreeTaskBlueprintBase.h"

UStateTreeTaskBlueprintBase::UStateTreeTaskBlueprintBase() {
    this->bShouldStateChangeOnReselect = true;
    this->bShouldCallTickOnlyOnEvents = false;
    this->bShouldCopyBoundPropertiesOnTick = true;
    this->bShouldCopyBoundPropertiesOnExitState = true;
}







void UStateTreeTaskBlueprintBase::FinishTask(const bool bSucceeded) {
}


