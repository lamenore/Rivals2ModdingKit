#include "GameplayTagContainerMatchCondition.h"

FGameplayTagContainerMatchCondition::FGameplayTagContainerMatchCondition() {
    this->MatchType = EGameplayContainerMatchType::Any;
    this->bExactMatch = false;
    this->bInvert = false;
}

