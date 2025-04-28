#pragma once
#include "CoreMinimal.h"
#include "ETrainingGameMode.generated.h"

UENUM(BlueprintType)
enum class ETrainingGameMode : uint8 {
    None,
    EyeBreak,
    Edgeguard,
};

