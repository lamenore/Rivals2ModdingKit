#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreeIndex16.h"
#include "StateTreeNodeIdToIndex.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeNodeIdToIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 Index;
    
    FStateTreeNodeIdToIndex();
};

