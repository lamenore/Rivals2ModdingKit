#pragma once
#include "CoreMinimal.h"
#include "EInputMode.generated.h"

UENUM(BlueprintType)
enum class EInputMode : uint8 {
    Any,
    ForceGamepad,
    ForceMouse,
};

