#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBase.h"
#include "StateTreeEvaluatorBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeEvaluatorBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    FStateTreeEvaluatorBase();
};

