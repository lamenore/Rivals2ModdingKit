#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ControllerVirtualKeyConversions.generated.h"

USTRUCT(BlueprintType)
struct FControllerVirtualKeyConversions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKey> KeyRemappings;
    
    RIVALS2_API FControllerVirtualKeyConversions();
};

