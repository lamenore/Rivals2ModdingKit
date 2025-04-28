#pragma once
#include "CoreMinimal.h"
#include "StateTreeCompareIntConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareIntConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Right;
    
    FStateTreeCompareIntConditionInstanceData();
};

