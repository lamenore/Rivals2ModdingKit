#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyAccessType.h"
#include "StateTreeIndex16.h"
#include "StateTreePropertyIndirection.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyIndirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 ArrayIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 NextIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreePropertyAccessType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* InstanceStruct;
    
    FStateTreePropertyIndirection();
};

