#pragma once
#include "CoreMinimal.h"
#include "OnStageClickedDelegateDelegate.generated.h"

class URivalsStageData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStageClickedDelegate, URivalsStageData*, SelectedStage, const int32&, LocalPlayerIndex);

