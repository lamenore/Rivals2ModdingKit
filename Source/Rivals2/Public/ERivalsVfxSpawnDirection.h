#pragma once
#include "CoreMinimal.h"
#include "ERivalsVfxSpawnDirection.generated.h"

UENUM()
enum class ERivalsVfxSpawnDirection : int8 {
    Reverse = -2,
    Left,
    Right = 1,
    Forward,
};

