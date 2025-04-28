#pragma once
#include "CoreMinimal.h"
#include "RivalsVfxDefinition.h"
#include "VFXCreationData.h"
#include "RivalCaptureVFX.generated.h"

USTRUCT(BlueprintType)
struct FRivalCaptureVFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsVfxDefinition EffectDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationWindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXCreationData CreationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlayed;
    
    RIVALS2_API FRivalCaptureVFX();
};

