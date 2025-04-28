#pragma once
#include "CoreMinimal.h"
#include "StateTreeRandomConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeRandomConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    FStateTreeRandomConditionInstanceData();
};

