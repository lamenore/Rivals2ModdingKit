#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayFabOssSessionInfo.h"
#include "PlayFabOssFindLobbiesSuccessEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayFabOssFindLobbiesSuccessEvent, const TArray<FRivalsPlayFabOssSessionInfo>&, SessionList);

