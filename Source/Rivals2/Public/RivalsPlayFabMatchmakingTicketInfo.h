#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayFabMatchmakingTicketInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayFabMatchmakingTicketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueueName;
    
    RIVALS2_API FRivalsPlayFabMatchmakingTicketInfo();
};

