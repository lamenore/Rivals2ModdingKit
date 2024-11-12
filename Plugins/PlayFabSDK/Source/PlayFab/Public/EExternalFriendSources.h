#pragma once
#include "CoreMinimal.h"
#include "EExternalFriendSources.generated.h"

UENUM(BlueprintType)
enum class EExternalFriendSources : uint8 {
    pfenum_None,
    pfenum_Steam,
    pfenum_Facebook,
    pfenum_Xbox,
    pfenum_Psn,
    pfenum_All,
};

