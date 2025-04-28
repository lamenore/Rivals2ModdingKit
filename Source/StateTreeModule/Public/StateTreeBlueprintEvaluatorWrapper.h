#pragma once
#include "CoreMinimal.h"
#include "StateTreeEvaluatorBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeBlueprintEvaluatorWrapper.generated.h"

class UStateTreeEvaluatorBlueprintBase;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeBlueprintEvaluatorWrapper : public FStateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeEvaluatorBlueprintBase> EvaluatorClass;
    
    FStateTreeBlueprintEvaluatorWrapper();
};

