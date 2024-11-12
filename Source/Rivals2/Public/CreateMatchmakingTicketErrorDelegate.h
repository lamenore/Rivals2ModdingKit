#pragma once
#include "CoreMinimal.h"
#include "CreateMatchmakingTicketErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreateMatchmakingTicketError, const FString&, QueueName);

