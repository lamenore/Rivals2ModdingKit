#pragma once
#include "CoreMinimal.h"
#include "ERivalsPlatformTraceType.generated.h"

UENUM(BlueprintType)
enum class ERivalsPlatformTraceType : uint8 {
    All,
    Solid,
    Jumpthrough,
    OneWay,
    SolidOrOneWay,
    None,
};

