#pragma once
#include "CoreMinimal.h"
#include "EAttackTargetState.generated.h"

UENUM(BlueprintType)
enum class EAttackTargetState : uint8 {
    Disabled,
    Enabled,
    Hit,
};

