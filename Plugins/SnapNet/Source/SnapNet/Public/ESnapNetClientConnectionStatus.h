#pragma once
#include "CoreMinimal.h"
#include "ESnapNetClientConnectionStatus.generated.h"

UENUM(BlueprintType)
enum class ESnapNetClientConnectionStatus : uint8 {
    Disconnected,
    Connecting,
    Connected,
};

