#pragma once
#include "CoreMinimal.h"
#include "ESnapNetFloatEncodingType.h"
#include "SnapNetDoubleEncoding.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetDoubleEncoding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetFloatEncodingType Encoding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExponentBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificandBits;
    
    FSnapNetDoubleEncoding();
};

