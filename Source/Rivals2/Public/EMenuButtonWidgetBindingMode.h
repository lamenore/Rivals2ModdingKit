#pragma once
#include "CoreMinimal.h"
#include "EMenuButtonWidgetBindingMode.generated.h"

UENUM(BlueprintType)
enum class EMenuButtonWidgetBindingMode : uint8 {
    None,
    ActionName,
    Key,
};

