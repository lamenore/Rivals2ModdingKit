#pragma once
#include "CoreMinimal.h"
#include "SnapNetSampleConnectToSessionCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSnapNetSampleConnectToSessionCompleteDelegate, bool, bSuccess);

