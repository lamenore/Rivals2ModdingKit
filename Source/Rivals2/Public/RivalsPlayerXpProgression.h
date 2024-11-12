#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayerLevelClaimHistory.h"
#include "RivalsPlayerXpProgression.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayerXpProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 xp_cumulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 xp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlayerLevelClaimHistory> lvls_claimed_history;
    
    RIVALS2_API FRivalsPlayerXpProgression();
};

