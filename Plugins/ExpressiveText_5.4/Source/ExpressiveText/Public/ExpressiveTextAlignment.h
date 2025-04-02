#pragma once
#include "CoreMinimal.h"
#include "EExpressiveTextAlignmentOffsetType.h"
#include "EExpressiveTextHorizontalAlignment.h"
#include "EExpressiveTextVerticalAlignment.h"
#include "ExpressiveTextAlignment.generated.h"

USTRUCT(BlueprintType)
struct FExpressiveTextAlignment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextVerticalAlignment VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextHorizontalAlignment HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextAlignmentOffsetType VerticalOffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextAlignmentOffsetType HorizontalOffsetType;
    
    EXPRESSIVETEXT_API FExpressiveTextAlignment();
};

