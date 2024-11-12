#pragma once
#include "CoreMinimal.h"
#include "StageVisualsUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStageVisualsUpdate, int32, GameplayFrame);

