#pragma once
#include "CoreMinimal.h"
#include "EStateTreeRunStatus.h"
#include "EStateTreeStateChangeType.h"
#include "EStateTreeTransitionPriority.h"
#include "StateTreeExecutionFrame.h"
#include "StateTreeStateHandle.h"
#include "StateTreeTransitionResult.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeTransitionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeExecutionFrame> NextActiveFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeRunStatus CurrentRunStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle SourceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeStateChangeType ChangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeTransitionPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* SourceStateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle SourceRootState;
    
    FStateTreeTransitionResult();
};

