#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "OnLobbyInfoEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInfoEvent, const FRivalsPlayFabLobbyInfo, LobbyInfo);

