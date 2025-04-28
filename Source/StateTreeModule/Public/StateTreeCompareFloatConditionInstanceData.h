#pragma once
#include "CoreMinimal.h"
#include "StateTreeCompareFloatConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareFloatConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Left;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Right;
    
    FStateTreeCompareFloatConditionInstanceData();
};

