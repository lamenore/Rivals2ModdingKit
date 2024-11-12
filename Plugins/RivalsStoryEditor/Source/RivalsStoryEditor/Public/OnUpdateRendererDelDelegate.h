#pragma once
#include "CoreMinimal.h"
#include "OnUpdateRendererDelDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateRendererDel, AActor*, Renderer, float, DeltaSeconds);

