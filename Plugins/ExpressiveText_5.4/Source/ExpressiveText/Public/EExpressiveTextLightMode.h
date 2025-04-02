#pragma once
#include "CoreMinimal.h"
#include "EExpressiveTextLightMode.generated.h"

UENUM(BlueprintType)
enum class EExpressiveTextLightMode : uint8 {
    Lit,
    Emissive,
    Additive,
};

