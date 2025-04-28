#pragma once
#include "CoreMinimal.h"
#include "EExTextDynamicMaterialParameters.generated.h"

UENUM(BlueprintType)
enum class EExTextDynamicMaterialParameters : uint8 {
    None = 0,
    PerInstanceRandom = 1,
    RevealAndClearInformation,
    LineIndex = 4,
    BlockSizeAndTopLeftPosition = 8,
};

