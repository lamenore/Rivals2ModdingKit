#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlotOptionButtonType.generated.h"

UENUM(BlueprintType)
enum class EPlayerSlotOptionButtonType : uint8 {
    Button,
    Binding,
    Slider,
    Tag,
    Toggle,
    MultiToggle,
};

