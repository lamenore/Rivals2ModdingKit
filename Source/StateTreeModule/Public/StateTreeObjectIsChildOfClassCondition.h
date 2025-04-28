#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeObjectIsChildOfClassCondition.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FStateTreeObjectIsChildOfClassCondition();
};

