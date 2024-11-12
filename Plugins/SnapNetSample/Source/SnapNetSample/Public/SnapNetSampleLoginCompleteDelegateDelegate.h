#pragma once
#include "CoreMinimal.h"
#include "SnapNetSampleLoginCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSnapNetSampleLoginCompleteDelegate, bool, bSuccess, const FString&, Error);

