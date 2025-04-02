#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExpressiveTextLayoutInformation.generated.h"

USTRUCT(BlueprintType)
struct FExpressiveTextLayoutInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WrappedDrawSize;
    
    EXPRESSIVETEXT_API FExpressiveTextLayoutInformation();
};

