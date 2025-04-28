#pragma once
#include "CoreMinimal.h"
#include "StateTreeIndex8.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeIndex8 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
public:
    FStateTreeIndex8();
};

