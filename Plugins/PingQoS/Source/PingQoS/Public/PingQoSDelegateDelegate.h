#pragma once
#include "CoreMinimal.h"
#include "PingQoSInfo.h"
#include "PingQoSDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPingQoSDelegate, const TArray<FPingQoSInfo>&, Result);

