#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeCompareBoolCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeCompareBoolCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FStateTreeCompareBoolCondition();
};

