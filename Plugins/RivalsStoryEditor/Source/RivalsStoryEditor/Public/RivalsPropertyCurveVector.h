#pragma once
#include "CoreMinimal.h"
#include "RivalsPropertyCurvePointVector.h"
#include "RivalsPropertyCurveVector.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPropertyCurveVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPropertyCurvePointVector> Points;
    
    RIVALSSTORYEDITOR_API FRivalsPropertyCurveVector();
};

