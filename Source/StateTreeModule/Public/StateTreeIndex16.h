#pragma once
#include "CoreMinimal.h"
#include "StateTreeIndex16.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeIndex16 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
public:
    FStateTreeIndex16();
};

