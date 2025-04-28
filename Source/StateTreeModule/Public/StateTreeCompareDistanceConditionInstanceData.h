#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreeCompareDistanceConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareDistanceConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    FStateTreeCompareDistanceConditionInstanceData();
};

