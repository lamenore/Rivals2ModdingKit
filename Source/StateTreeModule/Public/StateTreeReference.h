#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PropertyBag.h"
#include "StateTreeReference.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    

    FInstancedPropertyBag Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PropertyOverrides;
    
public:
    FStateTreeReference();
};

