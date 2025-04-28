#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeCompareEnumCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FStateTreeCompareEnumCondition();
};

