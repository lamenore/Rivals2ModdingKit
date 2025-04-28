#pragma once
#include "CoreMinimal.h"
#include "StateTreeEvaluatorBase.h"
#include "StateTreeEvaluatorCommonBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    FStateTreeEvaluatorCommonBase();
};

