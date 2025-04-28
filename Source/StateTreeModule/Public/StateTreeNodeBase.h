#pragma once
#include "CoreMinimal.h"
#include "StateTreeDataHandle.h"
#include "StateTreeIndex16.h"
#include "StateTreeNodeBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 BindingsBatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 InstanceTemplateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle InstanceDataHandle;
    
    FStateTreeNodeBase();
};

