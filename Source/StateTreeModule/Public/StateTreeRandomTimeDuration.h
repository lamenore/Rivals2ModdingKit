#pragma once
#include "CoreMinimal.h"
#include "StateTreeRandomTimeDuration.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeRandomTimeDuration {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Duration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 RandomVariance;
    
public:
    FStateTreeRandomTimeDuration();
};

