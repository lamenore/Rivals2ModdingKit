#pragma once
#include "CoreMinimal.h"
#include "ERivalsHitboxHitType.generated.h"

UENUM(BlueprintType)
enum class ERivalsHitboxHitType : uint8 {
    Hit,
    Shielded,
    Parried,
};

