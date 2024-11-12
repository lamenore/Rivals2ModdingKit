#pragma once
#include "CoreMinimal.h"
#include "EDebugCameraMode.generated.h"

UENUM(BlueprintType)
enum class EDebugCameraMode : uint8 {
    None,
    FillTop,
    FillBottom,
};

