#pragma once
#include "CoreMinimal.h"
#include "OnDynamicEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDynamicEvent, UObject*, Payload);

