#pragma once
#include "CoreMinimal.h"
#include "StateTreeObjectIsValidConditionInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeObjectIsValidConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FStateTreeObjectIsValidConditionInstanceData();
};

