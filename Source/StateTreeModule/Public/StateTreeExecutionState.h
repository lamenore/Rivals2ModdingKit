#pragma once
#include "CoreMinimal.h"
#include "EStateTreeRunStatus.h"
#include "EStateTreeUpdatePhase.h"
#include "StateTreeExecutionFrame.h"
#include "StateTreeIndex16.h"
#include "StateTreeStateHandle.h"
#include "StateTreeTransitionDelayedState.h"
#include "StateTreeExecutionState.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeExecutionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeExecutionFrame> ActiveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeTransitionDelayedState> DelayedTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 EnterStateFailedFrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 EnterStateFailedTaskIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeRunStatus LastTickStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeRunStatus TreeRunStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeRunStatus RequestedStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeUpdatePhase CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 CompletedFrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle CompletedStateHandle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 StateChangeCount;
    
    FStateTreeExecutionState();
};

