#pragma once
#include "CoreMinimal.h"
#include "UpdateFromEntityDynamicDelegateDelegate.generated.h"

class USnapNetEntityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUpdateFromEntityDynamicDelegate, const USnapNetEntityComponent*, entityComponent, float, DeltaSeconds, bool, teleported);

