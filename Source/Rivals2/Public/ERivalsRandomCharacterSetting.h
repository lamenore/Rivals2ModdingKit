#pragma once
#include "CoreMinimal.h"
#include "ERivalsRandomCharacterSetting.generated.h"

UENUM(BlueprintType)
enum class ERivalsRandomCharacterSetting : uint8 {
    None,
    RandomCharacter,
    RandomCharacterPerStock,
    Count,
};

