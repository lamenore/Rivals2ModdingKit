#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESnapNetFloatEncodingType.h"
#include "SnapNetVector2DEncoding.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetVector2DEncoding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetFloatEncodingType Encoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExponentBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificandBits;
    
    FSnapNetVector2DEncoding();
};

