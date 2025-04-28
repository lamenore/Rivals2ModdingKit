#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyCopyType.h"
#include "StateTreeDataHandle.h"
#include "StateTreeIndex16.h"
#include "StateTreePropertyIndirection.h"
#include "StateTreePropertyCopy.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyCopy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyIndirection SourceIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyIndirection TargetIndirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* SourceStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CopySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreePropertyCopyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 SourceStructIndex;
    
    FStateTreePropertyCopy();
};

