#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterLevelReward.generated.h"

USTRUCT(BlueprintType)
struct FRivalsCharacterLevelReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reward_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reward_qty;
    
    RIVALS2_API FRivalsCharacterLevelReward();
};

