#pragma once
#include "CoreMinimal.h"
#include "RefreshStarterPackReward.h"
#include "RefreshStarterPackResponse.generated.h"

USTRUCT(BlueprintType)
struct FRefreshStarterPackResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRefreshStarterPackReward> refresh_starterpack_rewards_granted;
    
    RIVALS2_API FRefreshStarterPackResponse();
};

