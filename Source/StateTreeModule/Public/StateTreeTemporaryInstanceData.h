#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "StateTreeDataHandle.h"
#include "StateTreeIndex16.h"
#include "StateTreeStateHandle.h"
#include "StateTreeTemporaryInstanceData.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeTemporaryInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle RootState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle DataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 OwnerNodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Instance;
    
    FStateTreeTemporaryInstanceData();
};

