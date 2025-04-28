#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeRandomCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeRandomCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    FStateTreeRandomCondition();
};

