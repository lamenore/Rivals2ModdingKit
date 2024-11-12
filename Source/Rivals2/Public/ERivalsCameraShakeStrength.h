#pragma once
#include "CoreMinimal.h"
#include "ERivalsCameraShakeStrength.generated.h"

UENUM(BlueprintType)
enum class ERivalsCameraShakeStrength : uint8 {
    None,
    Low,
    Medium,
    High,
};

