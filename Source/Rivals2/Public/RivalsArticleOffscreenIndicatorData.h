#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RivalsArticleOffscreenIndicatorData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsArticleOffscreenIndicatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOffscreenIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffscreenIndicatorOffset;
    
    RIVALS2_API FRivalsArticleOffscreenIndicatorData();
};

