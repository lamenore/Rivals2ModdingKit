#include "StateTreeConditionBase.h"

FStateTreeConditionBase::FStateTreeConditionBase() {
    this->Operand = EStateTreeConditionOperand::Copy;
    this->DeltaIndent = 0;
    this->EvaluationMode = EStateTreeConditionEvaluationMode::Evaluated;
}

