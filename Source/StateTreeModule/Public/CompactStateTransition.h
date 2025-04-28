#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStateTreeSelectionFallback.h"
#include "EStateTreeTransitionPriority.h"
#include "EStateTreeTransitionTrigger.h"
#include "StateTreeRandomTimeDuration.h"
#include "StateTreeStateHandle.h"
#include "CompactStateTransition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FCompactStateTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ConditionsBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeRandomTimeDuration Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeTransitionTrigger Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeTransitionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeSelectionFallback Fallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConditionsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTransitionEnabled: 1;
    
    FCompactStateTransition();
};

