#pragma once
#include "CoreMinimal.h"
#include "PingQoSInfo.h"
#include "SinglePingQoSDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSinglePingQoSDelegate, const FPingQoSInfo, Result);

