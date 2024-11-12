#pragma once
#include "CoreMinimal.h"
#include "RivalsLobbyErrorType.h"
#include "UpdateLobbySettingsFailedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateLobbySettingsFailedEvent, TEnumAsByte<RivalsLobbyErrorType>, ErrorType);

