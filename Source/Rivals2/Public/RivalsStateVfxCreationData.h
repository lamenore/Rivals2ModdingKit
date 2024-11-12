#pragma once
#include "CoreMinimal.h"
#include "VFXTransformData.h"
#include "RivalsStateVfxCreationData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsStateVfxCreationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationWindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXTransformData TransformData;
    
    RIVALS2_API FRivalsStateVfxCreationData();
};

