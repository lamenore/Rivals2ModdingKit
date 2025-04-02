#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextFields.h"
#include "ExpressiveTextSelector.generated.h"

class UExpressiveTextAsset;

USTRUCT(BlueprintType)
struct FExpressiveTextSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExpressiveTextAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressiveTextFields InlinedExpressiveText;
    
    EXPRESSIVETEXT_API FExpressiveTextSelector();
};

