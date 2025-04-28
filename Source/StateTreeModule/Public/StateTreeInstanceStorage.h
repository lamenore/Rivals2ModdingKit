#pragma once
#include "CoreMinimal.h"
#include "PropertyBag.h"
#include "InstancedStructContainer.h"
#include "StateTreeEventQueue.h"
#include "StateTreeExecutionState.h"
#include "StateTreeTemporaryInstanceData.h"
#include "StateTreeTransitionRequest.h"
#include "StateTreeInstanceStorage.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeInstanceStorage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeExecutionState ExecutionState;
    
    FInstancedStructContainer InstanceStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeTemporaryInstanceData> TemporaryInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeEventQueue EventQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeTransitionRequest> TransitionRequests;
    
    FInstancedPropertyBag GlobalParameters;
    
public:
    FStateTreeInstanceStorage();
};

