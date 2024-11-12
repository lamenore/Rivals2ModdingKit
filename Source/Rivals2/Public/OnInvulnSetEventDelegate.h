#pragma once
#include "CoreMinimal.h"
#include "OnInvulnSetEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInvulnSetEvent, const bool, bInvuln);

