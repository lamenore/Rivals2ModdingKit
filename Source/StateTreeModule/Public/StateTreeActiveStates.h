#pragma once
#include "CoreMinimal.h"
#include "StateTreeStateHandle.h"
#include "StateTreeActiveStates.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeActiveStates {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle States[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumStates;
    
    FStateTreeActiveStates();
};

