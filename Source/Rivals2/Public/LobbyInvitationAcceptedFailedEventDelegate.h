#pragma once
#include "CoreMinimal.h"
#include "RivalsLobbyErrorType.h"
#include "LobbyInvitationAcceptedFailedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyInvitationAcceptedFailedEvent, TEnumAsByte<RivalsLobbyErrorType>, ErrorType);

