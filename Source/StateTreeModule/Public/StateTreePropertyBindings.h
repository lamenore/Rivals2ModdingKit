#pragma once
#include "CoreMinimal.h"
#include "StateTreeBindableStructDesc.h"
#include "StateTreePropertyAccess.h"
#include "StateTreePropertyCopy.h"
#include "StateTreePropertyCopyBatch.h"
#include "StateTreePropertyIndirection.h"
#include "StateTreePropertyPathBinding.h"
#include "StateTreePropertyRefPath.h"
#include "StateTreePropertyBindings.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreePropertyBindings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeBindableStructDesc> SourceStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyCopyBatch> CopyBatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyPathBinding> PropertyPathBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyCopy> PropertyCopies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyRefPath> PropertyReferencePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyAccess> PropertyAccesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStateTreePropertyIndirection> PropertyIndirections;
    
public:
    FStateTreePropertyBindings();
};

