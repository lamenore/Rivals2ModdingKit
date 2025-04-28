#pragma once
#include "CoreMinimal.h"
#include "StageBoundImagePair.generated.h"

class UImage;

USTRUCT(BlueprintType)
struct FStageBoundImagePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DefaultImage;
    
    RIVALS2_API FStageBoundImagePair();
};

