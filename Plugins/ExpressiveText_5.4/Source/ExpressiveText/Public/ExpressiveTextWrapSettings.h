#pragma once
#include "CoreMinimal.h"
#include "EExpressiveTextWrapMode.h"
#include "ExpressiveTextWrapSettings.generated.h"

USTRUCT(BlueprintType)
struct FExpressiveTextWrapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextWrapMode ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    EXPRESSIVETEXT_API FExpressiveTextWrapSettings();
};

