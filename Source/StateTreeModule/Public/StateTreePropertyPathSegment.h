#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyPathSegment.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyPathSegment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* InstanceStruct;
    
public:
    FStateTreePropertyPathSegment();
};

