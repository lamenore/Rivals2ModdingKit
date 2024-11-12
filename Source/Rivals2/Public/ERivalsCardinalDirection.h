#pragma once
#include "CoreMinimal.h"
#include "ERivalsCardinalDirection.generated.h"

UENUM(BlueprintType)
enum class ERivalsCardinalDirection : uint8 {
    Center,
    Left,
    Right,
    Up,
    Down,
    Count,
};

