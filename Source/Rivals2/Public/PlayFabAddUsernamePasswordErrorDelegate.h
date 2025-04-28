#pragma once
#include "CoreMinimal.h"
#include "PlayFabAddUsernamePasswordErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayFabAddUsernamePasswordError, FText, ErrorReport);

