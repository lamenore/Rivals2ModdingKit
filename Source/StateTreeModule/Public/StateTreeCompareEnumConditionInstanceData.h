#pragma once
#include "CoreMinimal.h"
#include "StateTreeAnyEnum.h"
#include "StateTreeCompareEnumConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareEnumConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeAnyEnum Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeAnyEnum Right;
    
    FStateTreeCompareEnumConditionInstanceData();
};

