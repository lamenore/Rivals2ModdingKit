#pragma once
#include "CoreMinimal.h"
#include "ERivalsCharacterStateFlag.generated.h"

UENUM(BlueprintType)
enum class ERivalsCharacterStateFlag : uint8 {
    CanAerialDrift,
    CanAirDodge,
    CanAttack,
    CanCrouch,
    CanDash,
    CanFallThrough,
    CanGrabLedge,
    CanJump,
    CanPlatDrop,
    CanShield,
    CanWalk,
    CanWallJump,
    DisableECB,
    DisableGravity,
    FarFromECB,
    HasHitObject,
    HasHitPlayer,
    HasHitShield,
    PerformedBReverse,
    PreserveMomentumOnWallCollision,
    PreserveStateOnHit,
    ReverseAfterState,
    Rooted,
    SnapToPlatforms,
    SuccessfullyParried,
    SuccessfullyCountered,
    Count,
};

