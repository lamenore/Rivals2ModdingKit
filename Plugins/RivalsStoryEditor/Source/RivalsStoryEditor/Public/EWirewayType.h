#pragma once
#include "CoreMinimal.h"
#include "EWirewayType.generated.h"

UENUM(BlueprintType)
enum EWirewayType {
    Pulse,
    Toggle,
    SoTrue,
    SoFalse,
    HitBox,
    Activator,
};

