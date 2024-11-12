#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERivalsVelocityModifierInput.h"
#include "ERivalsVelocityType.h"
#include "RivalsVelocityModifier.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FRivalsVelocityModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsVelocityModifierInput ModifierInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsVelocityType ModifierVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ModifierVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleChange;
    
    FRivalsVelocityModifier();
};

