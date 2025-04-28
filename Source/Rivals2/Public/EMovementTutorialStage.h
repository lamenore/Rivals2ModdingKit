#pragma once
#include "CoreMinimal.h"
#include "EMovementTutorialStage.generated.h"

UENUM(BlueprintType)
enum class EMovementTutorialStage : uint8 {
    Walk,
    Run,
    Jump,
    DoubleJump,
    Platforms,
    Complete,
    None,
};

