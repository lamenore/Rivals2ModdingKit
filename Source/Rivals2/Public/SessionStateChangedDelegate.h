#pragma once
#include "CoreMinimal.h"
#include "ERivalsSessionState.h"
#include "SessionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSessionStateChanged, const ERivalsSessionState, SessionState);

