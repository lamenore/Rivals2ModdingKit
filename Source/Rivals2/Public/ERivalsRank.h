#pragma once
#include "CoreMinimal.h"
#include "ERivalsRank.generated.h"

UENUM(BlueprintType)
enum class ERivalsRank : uint8 {
    Unranked,
    Stone,
    Bronze,
    Silver,
    Gold,
    Platinum,
    Diamond,
    Master,
    Grandmaster,
    Aetherean,
};

