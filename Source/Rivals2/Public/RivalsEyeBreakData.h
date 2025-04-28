#pragma once
#include "CoreMinimal.h"
#include "RivalsEyeBreakData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEyeBreakData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> CharScoreMap;
    
    RIVALS2_API FRivalsEyeBreakData();
};

