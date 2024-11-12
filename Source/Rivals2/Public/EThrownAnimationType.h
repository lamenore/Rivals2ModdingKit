#pragma once
#include "CoreMinimal.h"
#include "EThrownAnimationType.generated.h"

UENUM(BlueprintType)
enum class EThrownAnimationType : uint8 {
    None,
    ChestFirst,
    BackFirst,
    Struggle,
    StumbleForward,
    StumbleBackward,
    PulledForward,
    PulledUnder,
    LaunchedUpward,
    SlamFront,
    SlamBack,
    GroundedResist,
    AerialResist,
    GroundedHurt,
    AerialHurt,
    Bubbled,
    Wrapped,
    Cubed,
};

