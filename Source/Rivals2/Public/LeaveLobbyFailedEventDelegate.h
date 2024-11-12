#pragma once
#include "CoreMinimal.h"
#include "RivalsLobbyErrorType.h"
#include "LeaveLobbyFailedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaveLobbyFailedEvent, TEnumAsByte<RivalsLobbyErrorType>, ErrorType);

