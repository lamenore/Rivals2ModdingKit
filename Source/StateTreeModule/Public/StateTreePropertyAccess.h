#pragma once
#include "CoreMinimal.h"
#include "StateTreeDataHandle.h"
#include "StateTreePropertyIndirection.h"
#include "StateTreePropertyAccess.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyAccess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyIndirection SourceIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* SourceStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
    FStateTreePropertyAccess();
};

