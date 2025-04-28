#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeCompareDistanceCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareDistanceCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenericAICheck Operator;
    
    FStateTreeCompareDistanceCondition();
};

