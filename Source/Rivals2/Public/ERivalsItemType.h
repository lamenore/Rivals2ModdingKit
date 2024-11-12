#pragma once
#include "CoreMinimal.h"
#include "ERivalsItemType.generated.h"

UENUM(BlueprintType)
enum class ERivalsItemType : uint8 {
    Skin,
    Emote,
    Icon,
    RespawnPlatform,
    Palette,
    DeathEffect,
    Bundle,
    Currency,
    Taunt,
    ItemType_MAX UMETA(Hidden),
};

