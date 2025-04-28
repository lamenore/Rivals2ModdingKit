#include "CompactStateTreeState.h"

FCompactStateTreeState::FCompactStateTreeState() {
    this->LinkedAsset = NULL;
    this->ChildrenBegin = 0;
    this->ChildrenEnd = 0;
    this->EnterConditionsBegin = 0;
    this->TransitionsBegin = 0;
    this->TasksBegin = 0;
    this->EnterConditionsNum = 0;
    this->TransitionsNum = 0;
    this->TasksNum = 0;
    this->InstanceDataNum = 0;
    this->Type = EStateTreeStateType::State;
    this->SelectionBehavior = EStateTreeStateSelectionBehavior::None;
    this->bHasTransitionTasks = false;
    this->bEnabled = false;
}

