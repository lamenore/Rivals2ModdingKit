#pragma once
#include "CoreMinimal.h"
#include "ESnapNetFloatEncodingType.h"
#include "SnapNetFloatEncoding.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetFloatEncoding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetFloatEncodingType Encoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExponentBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificandBits;
    
    FSnapNetFloatEncoding();
};

