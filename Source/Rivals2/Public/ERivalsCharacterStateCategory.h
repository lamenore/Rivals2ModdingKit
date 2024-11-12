#pragma once
#include "CoreMinimal.h"
#include "ERivalsCharacterStateCategory.generated.h"

UENUM(BlueprintType)
enum class ERivalsCharacterStateCategory : uint8 {
    GroundOnly,
    AirOnly,
    GroundOrAir,
    GroundedAtFrameStartOnly,
};

