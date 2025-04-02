#pragma once
#include "CoreMinimal.h"
#include "ExpressiveLineExtractionsInfo.generated.h"

USTRUCT(BlueprintType)
struct FExpressiveLineExtractionsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnprocessedLine;
    
    EXPRESSIVETEXT_API FExpressiveLineExtractionsInfo();
};

