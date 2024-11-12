#pragma once
#include "CoreMinimal.h"
#include "EPartyInvitationRevocability.generated.h"

UENUM(BlueprintType)
enum class EPartyInvitationRevocability : uint8 {
    pfenum_Creator,
    pfenum_Anyone,
};

