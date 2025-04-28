#pragma once
#include "CoreMinimal.h"
#include "ERivalsFloorhugType.generated.h"

UENUM(BlueprintType)
enum class ERivalsFloorhugType : uint8 {
    AllowAllFloorhugs,
    PreventNonTumbleFloorhugs,
    PreventAllFloorhugs,
};

