#pragma once
#include "CoreMinimal.h"
#include "EStateTreeExternalDataRequirement.h"
#include "StateTreeExternalDataHandle.h"
#include "StateTreeExternalDataDesc.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeExternalDataDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeExternalDataHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeExternalDataRequirement Requirement;
    
    FStateTreeExternalDataDesc();
};

