#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskCommonBase.h"
#include "StateTreeDelayTask.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeDelayTask : public FStateTreeTaskCommonBase {
    GENERATED_BODY()
public:
    FStateTreeDelayTask();
};

