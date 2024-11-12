#pragma once
#include "CoreMinimal.h"
#include "ERivalsOptionsButtonType.generated.h"

UENUM(BlueprintType)
enum class ERivalsOptionsButtonType : uint8 {
    None,
    Button,
    Binding,
    Slider,
    Tag,
};

