#pragma once
#include "CoreMinimal.h"
#include "RivalsLobbyErrorType.h"
#include "OnLobbyCreateFailedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyCreateFailedEvent, TEnumAsByte<RivalsLobbyErrorType>, ErrorType);

