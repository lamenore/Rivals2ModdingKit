#pragma once
#include "CoreMinimal.h"
#include "SnapNetSampleFindSessionsCompleteDelegateDelegate.generated.h"

class USnapNetSampleSessionListItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSnapNetSampleFindSessionsCompleteDelegate, const TArray<USnapNetSampleSessionListItem*>&, Sessions);

