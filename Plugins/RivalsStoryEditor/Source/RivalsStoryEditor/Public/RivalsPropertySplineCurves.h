#pragma once
#include "CoreMinimal.h"
#include "RivalsPropertyCurveQuat.h"
#include "RivalsPropertyCurveVector.h"
#include "RivalsPropertySplineCurves.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPropertySplineCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPropertyCurveVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPropertyCurveQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPropertyCurveVector Scale;
    
    RIVALSSTORYEDITOR_API FRivalsPropertySplineCurves();
};

