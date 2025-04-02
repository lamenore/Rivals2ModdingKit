#pragma once
#include "CoreMinimal.h"
#include "EExtractionSectionType.h"
#include "ExpressiveTextExtractionSection.generated.h"

USTRUCT(BlueprintType)
struct FExpressiveTextExtractionSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExtractionSectionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndIndex;
    
    EXPRESSIVETEXT_API FExpressiveTextExtractionSection();
};

