#pragma once
#include "CoreMinimal.h"
#include "ConnectToPlayFabServicesErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectToPlayFabServicesError, const FString&, ErrorReport);

