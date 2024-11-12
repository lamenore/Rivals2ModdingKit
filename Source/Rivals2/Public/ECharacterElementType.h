#pragma once
#include "CoreMinimal.h"
#include "ECharacterElementType.generated.h"

UENUM(BlueprintType)
enum class ECharacterElementType : uint8 {
    None,
    Fire,
    Water,
    Air,
    Earth,
};

