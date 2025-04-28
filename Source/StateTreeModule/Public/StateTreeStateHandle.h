#pragma once
#include "CoreMinimal.h"
#include "StateTreeStateHandle.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeStateHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    FStateTreeStateHandle();
};

