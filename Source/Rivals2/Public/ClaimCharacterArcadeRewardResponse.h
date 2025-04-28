#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterArcadeReward.h"
#include "ClaimCharacterArcadeRewardResponse.generated.h"

USTRUCT(BlueprintType)
struct FClaimCharacterArcadeRewardResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsCharacterArcadeReward> arcade_rewards_granted;
    
    RIVALS2_API FClaimCharacterArcadeRewardResponse();
};

