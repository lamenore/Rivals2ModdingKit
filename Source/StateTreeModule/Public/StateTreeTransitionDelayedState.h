#pragma once
#include "CoreMinimal.h"
#include "StateTreeIndex16.h"
#include "StateTreeTransitionDelayedState.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeTransitionDelayedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 TransitionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    FStateTreeTransitionDelayedState();
};

