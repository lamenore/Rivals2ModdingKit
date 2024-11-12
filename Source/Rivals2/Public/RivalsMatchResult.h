#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "RivalsMatchResult.generated.h"

USTRUCT(BlueprintType)
struct FRivalsMatchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bMatchVictory;
    
    RIVALS2_API FRivalsMatchResult();
};

