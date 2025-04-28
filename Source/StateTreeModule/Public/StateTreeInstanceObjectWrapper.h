#pragma once
#include "CoreMinimal.h"
#include "StateTreeInstanceObjectWrapper.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeInstanceObjectWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* InstanceObject;
    
    FStateTreeInstanceObjectWrapper();
};

