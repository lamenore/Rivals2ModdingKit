#pragma once
#include "CoreMinimal.h"
#include "EDirectPeerConnectivityOptions.generated.h"

UENUM(BlueprintType)
enum class EDirectPeerConnectivityOptions : uint8 {
    pfenum_None,
    pfenum_SamePlatformType,
    pfenum_DifferentPlatformType,
    pfenum_AnyPlatformType,
    pfenum_SameEntityLoginProvider,
    pfenum_DifferentEntityLoginProvider,
    pfenum_AnyEntityLoginProvider,
    pfenum_AnyPlatformTypeAndEntityLoginProvider,
};

