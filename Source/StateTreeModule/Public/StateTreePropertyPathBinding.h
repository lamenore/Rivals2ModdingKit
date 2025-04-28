#pragma once
#include "CoreMinimal.h"
#include "StateTreeDataHandle.h"
#include "StateTreePropertyPath.h"
#include "StateTreePropertyPathBinding.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyPathBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyPath SourcePropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyPath TargetPropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
public:
    FStateTreePropertyPathBinding();
};

