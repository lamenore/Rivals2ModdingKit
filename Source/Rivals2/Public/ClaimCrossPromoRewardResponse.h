#pragma once
#include "CoreMinimal.h"
#include "RivalsCrossPromoReward.h"
#include "ClaimCrossPromoRewardResponse.generated.h"

USTRUCT(BlueprintType)
struct FClaimCrossPromoRewardResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsCrossPromoReward> cross_promo_rewards_granted;
    
    RIVALS2_API FClaimCrossPromoRewardResponse();
};

