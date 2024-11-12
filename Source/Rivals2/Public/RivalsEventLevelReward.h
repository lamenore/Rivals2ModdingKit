#pragma once
#include "CoreMinimal.h"
#include "RivalsEventLevelReward.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEventLevelReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reward_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reward_qty;
    
    RIVALS2_API FRivalsEventLevelReward();
};

