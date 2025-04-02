#pragma once
#include "CoreMinimal.h"
#include "EExpressiveTextAlignmentOffsetType.h"
#include "EExpressiveTextHorizontalAlignment.h"
#include "EExpressiveTextVerticalAlignment.h"
#include "EExpressiveTextWrapMode.h"
#include "ExpressiveTextOnscreenPositioningBasis.generated.h"

USTRUCT(BlueprintType)
struct FExpressiveTextOnscreenPositioningBasis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextVerticalAlignment VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextHorizontalAlignment HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextAlignmentOffsetType VerticalOffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextAlignmentOffsetType HorizontalOffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextWrapMode WidthType;
    
    EXPRESSIVETEXT_API FExpressiveTextOnscreenPositioningBasis();
};

