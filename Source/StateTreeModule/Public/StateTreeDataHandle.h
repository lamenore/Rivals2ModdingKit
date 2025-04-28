#pragma once
#include "CoreMinimal.h"
#include "EStateTreeDataSourceType.h"
#include "StateTreeStateHandle.h"
#include "StateTreeDataHandle.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeDataHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeDataSourceType Source;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeStateHandle StateHandle;
    
public:
    FStateTreeDataHandle();
};

