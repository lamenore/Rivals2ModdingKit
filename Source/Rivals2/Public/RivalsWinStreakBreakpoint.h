#pragma once
#include "CoreMinimal.h"
#include "RivalsWinStreakBreakpoint.generated.h"

USTRUCT(BlueprintType)
struct FRivalsWinStreakBreakpoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 start_wincount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 end_wincount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float winstreak_percent_bonus;
    
    RIVALS2_API FRivalsWinStreakBreakpoint();
};

