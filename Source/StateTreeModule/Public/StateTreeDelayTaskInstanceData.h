#pragma once
#include "CoreMinimal.h"
#include "StateTreeDelayTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeDelayTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunForever;
    
    FStateTreeDelayTaskInstanceData();
};

