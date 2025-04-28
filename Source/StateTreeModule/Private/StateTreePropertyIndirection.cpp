#include "StateTreePropertyIndirection.h"

FStateTreePropertyIndirection::FStateTreePropertyIndirection() {
    this->Offset = 0;
    this->Type = EStateTreePropertyAccessType::Offset;
    this->InstanceStruct = NULL;
}

