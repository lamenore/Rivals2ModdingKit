#pragma once
#include "CoreMinimal.h"
#include "EMenuButtonWidgetDisplayModes.generated.h"

UENUM(BlueprintType)
enum class EMenuButtonWidgetDisplayModes : uint8 {
    None,
    Icon,
    Text,
    Button = 4,
};

