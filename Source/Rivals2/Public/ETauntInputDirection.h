#pragma once
#include "CoreMinimal.h"
#include "ETauntInputDirection.generated.h"

UENUM(BlueprintType)
enum class ETauntInputDirection : uint8 {
    Up,
    Down,
    Left,
    Right,
};

