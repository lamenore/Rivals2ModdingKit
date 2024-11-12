#pragma once
#include "CoreMinimal.h"
#include "OnLobbyJoinFailedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyJoinFailedEvent, const FName, ErrorTypeName);

