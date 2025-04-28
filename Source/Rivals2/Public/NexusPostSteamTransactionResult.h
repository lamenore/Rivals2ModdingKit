#pragma once
#include "CoreMinimal.h"
#include "NexusPostSteamTransactionResult.generated.h"

USTRUCT(BlueprintType)
struct FNexusPostSteamTransactionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float buckback_percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 buckback_amount_received;
    
    RIVALS2_API FNexusPostSteamTransactionResult();
};

