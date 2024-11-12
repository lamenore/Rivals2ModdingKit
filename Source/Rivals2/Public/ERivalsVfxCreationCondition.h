#pragma once
#include "CoreMinimal.h"
#include "ERivalsVfxCreationCondition.generated.h"

UENUM(BlueprintType)
enum class ERivalsVfxCreationCondition : uint8 {
    None,
    StateInt0,
    StateInt1,
    StateInt2,
    CharacterSpecific1,
    CharacterSpecific2,
};

