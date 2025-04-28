#pragma once
#include "CoreMinimal.h"
#include "RefreshStarterPackReward.generated.h"

USTRUCT(BlueprintType)
struct FRefreshStarterPackReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quantity;
    
    RIVALS2_API FRefreshStarterPackReward();
};

