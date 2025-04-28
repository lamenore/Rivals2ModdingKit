#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeObjectIsValidCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FStateTreeObjectIsValidCondition();
};

