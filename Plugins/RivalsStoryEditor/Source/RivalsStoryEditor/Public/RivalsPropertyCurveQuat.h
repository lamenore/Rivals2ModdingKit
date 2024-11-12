#pragma once
#include "CoreMinimal.h"
#include "RivalsPropertyCurvePointQuat.h"
#include "RivalsPropertyCurveQuat.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPropertyCurveQuat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPropertyCurvePointQuat> Points;
    
    RIVALSSTORYEDITOR_API FRivalsPropertyCurveQuat();
};

