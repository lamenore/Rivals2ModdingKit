#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreeStateHandle.h"
#include "StateTreeStateIdToHandle.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeStateIdToHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle Handle;
    
    FStateTreeStateIdToHandle();
};

