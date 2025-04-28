#pragma once
#include "CoreMinimal.h"
#include "RivalsTargetBreakData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsTargetBreakData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> CharTimeMap;
    
    RIVALS2_API FRivalsTargetBreakData();
};

