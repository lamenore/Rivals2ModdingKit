#pragma once
#include "CoreMinimal.h"
#include "FrameAdvanceEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrameAdvanceEvent, bool, FrameAdvanceEnabled);

