#pragma once
#include "CoreMinimal.h"
#include "ERivalsCharacterStateCategory.h"
#include "ERivalsVfxCreationCondition.h"
#include "VFXTransformData.h"
#include "VFXCreationDataBasic.generated.h"

USTRUCT(BlueprintType)
struct FVFXCreationDataBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsCharacterStateCategory GroundedConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsVfxCreationCondition OtherConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NegateOtherCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXTransformData TransformData;
    
    RIVALS2_API FVFXCreationDataBasic();
};

