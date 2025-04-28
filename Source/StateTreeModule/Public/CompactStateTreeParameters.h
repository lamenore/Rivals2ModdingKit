#pragma once
#include "CoreMinimal.h"
#include "PropertyBag.h"
#include "CompactStateTreeParameters.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FCompactStateTreeParameters {
    GENERATED_BODY()
public:
    FInstancedPropertyBag Parameters;
    
    FCompactStateTreeParameters();
};

