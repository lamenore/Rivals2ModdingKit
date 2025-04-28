#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "StateTreeTaskCommonBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeTaskCommonBase : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    FStateTreeTaskCommonBase();
};

