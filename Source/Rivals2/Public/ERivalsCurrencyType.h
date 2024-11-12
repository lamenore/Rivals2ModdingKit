#pragma once
#include "CoreMinimal.h"
#include "ERivalsCurrencyType.generated.h"

UENUM(BlueprintType)
enum class ERivalsCurrencyType : uint8 {
    None,
    BetaCoin,
    AetherCoin,
    AetherBuck,
    Real,
    CurrencyType_MAX UMETA(Hidden),
};

