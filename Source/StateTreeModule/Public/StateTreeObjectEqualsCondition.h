#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeObjectEqualsCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeObjectEqualsCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FStateTreeObjectEqualsCondition();
};

