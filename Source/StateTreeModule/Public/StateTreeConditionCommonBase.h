#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionBase.h"
#include "StateTreeConditionCommonBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeConditionCommonBase : public FStateTreeConditionBase {
    GENERATED_BODY()
public:
    FStateTreeConditionCommonBase();
};

