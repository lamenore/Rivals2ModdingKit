#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayerLevelClaimHistory.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayerLevelClaimHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool had_starterpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> transaction_ids;
    
    RIVALS2_API FRivalsPlayerLevelClaimHistory();
};

