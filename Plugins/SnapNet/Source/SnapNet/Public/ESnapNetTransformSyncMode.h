#pragma once
#include "CoreMinimal.h"
#include "ESnapNetTransformSyncMode.generated.h"

UENUM(BlueprintType)
enum class ESnapNetTransformSyncMode : uint8 {
    None,
    PositionOnly,
    RotationOnly,
    PositionAndRotation,
    RigidBody,
};

