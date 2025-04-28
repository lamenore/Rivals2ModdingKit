#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeBlueprintConditionWrapper.generated.h"

class UStateTreeConditionBlueprintBase;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeConditionBlueprintBase> ConditionClass;
    
    FStateTreeBlueprintConditionWrapper();
};

