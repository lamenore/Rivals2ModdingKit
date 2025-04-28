#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreeIndex16.h"
#include "StateTreeTransitionIdToIndex.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeTransitionIdToIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 Index;
    
    FStateTreeTransitionIdToIndex();
};

