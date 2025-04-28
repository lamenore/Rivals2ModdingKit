#pragma once
#include "CoreMinimal.h"
#include "RivalsWinStreakBreakpoint.h"
#include "RivalsWinStreakTypeData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsWinStreakTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 winstreak_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float winstreak_multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsWinStreakBreakpoint> winstreak_breakpoints;
    
    RIVALS2_API FRivalsWinStreakTypeData();
};

