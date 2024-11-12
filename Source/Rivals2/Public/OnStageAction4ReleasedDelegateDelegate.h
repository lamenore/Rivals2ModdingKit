#pragma once
#include "CoreMinimal.h"
#include "OnStageAction4ReleasedDelegateDelegate.generated.h"

class URivalsStageData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStageAction4ReleasedDelegate, URivalsStageData*, SelectedStage, const int32&, LocalPlayerIndex);

