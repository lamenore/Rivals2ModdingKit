#pragma once
#include "CoreMinimal.h"
#include "SnapNetProperty.h"
#include "SnapNetPropertyWithInterpolation.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyWithInterpolation : public FSnapNetProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DiscontinuityFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Interpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DiscontinuitiesSupported;
    
public:
    FSnapNetPropertyWithInterpolation();
};

