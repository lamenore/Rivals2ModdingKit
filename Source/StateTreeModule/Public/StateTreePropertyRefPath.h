#pragma once
#include "CoreMinimal.h"
#include "StateTreeDataHandle.h"
#include "StateTreePropertyPath.h"
#include "StateTreePropertyRefPath.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyRefPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyPath SourcePropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeDataHandle SourceDataHandle;
    
public:
    FStateTreePropertyRefPath();
};

