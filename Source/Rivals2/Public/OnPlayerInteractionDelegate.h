#pragma once
#include "CoreMinimal.h"
#include "OnPlayerInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInteraction, const int32, UserIndex);

