#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESnapNetFloatEncodingType.h"
#include "SnapNetVectorEncoding.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetVectorEncoding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetFloatEncodingType Encoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExponentBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificandBits;
    
    FSnapNetVectorEncoding();
};

