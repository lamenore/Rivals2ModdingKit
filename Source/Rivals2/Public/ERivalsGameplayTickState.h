#pragma once
#include "CoreMinimal.h"
#include "ERivalsGameplayTickState.generated.h"

UENUM(BlueprintType)
enum class ERivalsGameplayTickState : uint8 {
    StartFrame,
    PreMovement,
    PostMovement,
    QueryHitboxes,
    ProcessHitboxes,
    PostHitboxProcessing,
    EndFrame,
};

