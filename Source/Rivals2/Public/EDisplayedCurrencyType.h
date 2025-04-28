#pragma once
#include "CoreMinimal.h"
#include "EDisplayedCurrencyType.generated.h"

UENUM(BlueprintType)
enum class EDisplayedCurrencyType : uint8 {
    Bucks,
    Coins,
    BetaCoins,
    RankedMedals,
};

