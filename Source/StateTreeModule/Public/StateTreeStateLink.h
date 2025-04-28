#pragma once
#include "CoreMinimal.h"
#include "StateTreeStateHandle.h"
#include "StateTreeStateLink.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeStateLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle StateHandle;
    
    FStateTreeStateLink();
};

