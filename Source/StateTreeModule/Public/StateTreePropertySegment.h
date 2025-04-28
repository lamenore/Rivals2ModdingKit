#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyAccessType.h"
#include "StateTreeIndex16.h"
#include "StateTreePropertySegment.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertySegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 NextIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreePropertyAccessType Type;
    
    FStateTreePropertySegment();
};

