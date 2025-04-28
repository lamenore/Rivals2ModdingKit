#pragma once
#include "CoreMinimal.h"
#include "StateTreeBindableStructDesc.h"
#include "StateTreePropertyCopyBatch.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyCopyBatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeBindableStructDesc TargetStruct;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BindingsBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BindingsEnd;
    
    FStateTreePropertyCopyBatch();
};

