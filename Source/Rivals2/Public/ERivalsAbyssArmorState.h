#pragma once
#include "CoreMinimal.h"
#include "ERivalsAbyssArmorState.generated.h"

UENUM(BlueprintType)
enum class ERivalsAbyssArmorState : uint8 {
    Normal,
    Cracked,
    VeryCracked,
    Broken,
    COUNT,
};

