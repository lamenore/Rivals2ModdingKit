#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "Templates/SubclassOf.h"
#include "StateTreeBlueprintTaskWrapper.generated.h"

class UStateTreeTaskBlueprintBase;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStateTreeTaskBlueprintBase> TaskClass;
    
    FStateTreeBlueprintTaskWrapper();
};

