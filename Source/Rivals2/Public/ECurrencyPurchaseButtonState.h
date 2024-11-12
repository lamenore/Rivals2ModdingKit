#pragma once
#include "CoreMinimal.h"
#include "ECurrencyPurchaseButtonState.generated.h"

UENUM(BlueprintType)
enum class ECurrencyPurchaseButtonState : uint8 {
    Hidden,
    Both,
    Coins,
    Bucks,
};

