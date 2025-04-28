#pragma once
#include "CoreMinimal.h"
#include "EStateTreeLinkerStatus.generated.h"

UENUM(BlueprintType)
enum class EStateTreeLinkerStatus : uint8 {
    Succeeded,
    Failed,
};

