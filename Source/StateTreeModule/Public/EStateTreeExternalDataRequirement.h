#pragma once
#include "CoreMinimal.h"
#include "EStateTreeExternalDataRequirement.generated.h"

UENUM(BlueprintType)
enum class EStateTreeExternalDataRequirement : uint8 {
    Required,
    Optional,
};

