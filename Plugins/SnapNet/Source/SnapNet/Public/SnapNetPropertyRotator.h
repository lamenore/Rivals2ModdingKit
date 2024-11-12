#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESnapNetRotatorEncodingSource.h"
#include "ESnapNetRotatorInterpolationMethod.h"
#include "SnapNetPropertyWithInterpolation.h"
#include "SnapNetPropertyRotator.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyRotator : public FSnapNetPropertyWithInterpolation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetRotatorEncodingSource EncodingSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetRotatorInterpolationMethod InterpolationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
public:
    FSnapNetPropertyRotator();
};

