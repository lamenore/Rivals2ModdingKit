#pragma once
#include "CoreMinimal.h"
#include "EAttackTargetEntityState.generated.h"

UENUM(BlueprintType)
enum class EAttackTargetEntityState : uint8 {
    Disabled,
    Enabled,
    Hit,
};

