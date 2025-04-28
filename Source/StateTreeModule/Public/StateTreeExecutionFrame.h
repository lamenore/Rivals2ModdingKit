#pragma once
#include "CoreMinimal.h"
#include "StateTreeActiveStates.h"
#include "StateTreeDataHandle.h"
#include "StateTreeIndex16.h"
#include "StateTreeStateHandle.h"
#include "StateTreeExecutionFrame.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeExecutionFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle RootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeActiveStates ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 ExternalDataBaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 GlobalInstanceIndexBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 ActiveInstanceIndexBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle StateParameterDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle GlobalParameterDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGlobalFrame: 1;
    
    FStateTreeExecutionFrame();
};

