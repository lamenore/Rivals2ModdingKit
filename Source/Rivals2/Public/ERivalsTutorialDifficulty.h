#pragma once
#include "CoreMinimal.h"
#include "ERivalsTutorialDifficulty.generated.h"

UENUM(BlueprintType)
enum class ERivalsTutorialDifficulty : uint8 {
    None,
    Beginner,
    Intermediate,
    Advanced,
};

