#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyPathSegment.h"
#include "StateTreePropertyPath.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyPathSegment> Segments;
    
public:
    FStateTreePropertyPath();
};

