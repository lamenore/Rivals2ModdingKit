#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayerArcadeRewardsClaimHistory.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayerArcadeRewardsClaimHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hard_abyss_reward_claimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> difficulties_claimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> trans_id;
    
    RIVALS2_API FRivalsPlayerArcadeRewardsClaimHistory();
};

