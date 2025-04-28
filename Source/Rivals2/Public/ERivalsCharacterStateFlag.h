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
    ForceParryStun,
    HasHitObject,
    HasHitPlayer,
    HasHitShield,
    PerformedBReverse,
    PreserveMomentumAtLedge,
    PreserveMomentumOnWallCollision,
    PreserveStateOnHit,
    PreventFastfalls,
    ReverseAfterState,
    Rooted,
    SnapToPlatforms,
    StartedAttackWithRightStick,
    SuccessfullyParried,
    SuccessfullyCountered,
    Count,
};

