#pragma once
#include "CoreMinimal.h"
#include "StateTreeObjectIsChildOfClassConditionInstanceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeObjectIsChildOfClassConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    FStateTreeObjectIsChildOfClassConditionInstanceData();
};

