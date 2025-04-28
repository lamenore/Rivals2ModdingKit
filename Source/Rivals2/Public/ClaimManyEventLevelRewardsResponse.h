#pragma once
#include "CoreMinimal.h"
#include "RivalsEventLevelReward.h"
#include "ClaimManyEventLevelRewardsResponse.generated.h"

USTRUCT(BlueprintType)
struct FClaimManyEventLevelRewardsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsEventLevelReward> claimed_rewards;
    
    RIVALS2_API FClaimManyEventLevelRewardsResponse();
};

