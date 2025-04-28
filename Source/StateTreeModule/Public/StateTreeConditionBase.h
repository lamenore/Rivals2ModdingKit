#pragma once
#include "CoreMinimal.h"
#include "EStateTreeConditionEvaluationMode.h"
#include "EStateTreeConditionOperand.h"
#include "StateTreeNodeBase.h"
#include "StateTreeConditionBase.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeConditionBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeConditionOperand Operand;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DeltaIndent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeConditionEvaluationMode EvaluationMode;
    
    FStateTreeConditionBase();
};

