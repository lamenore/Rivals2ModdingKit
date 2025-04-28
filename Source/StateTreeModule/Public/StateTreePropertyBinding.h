#pragma once
#include "CoreMinimal.h"
#include "EStateTreePropertyCopyType.h"
#include "StateTreeIndex16.h"
#include "StateTreePropertySegment.h"
#include "StateTreePropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertySegment SourcePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertySegment TargetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeIndex16 SourceStructIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreePropertyCopyType CopyType;
    
    FStateTreePropertyBinding();
};

