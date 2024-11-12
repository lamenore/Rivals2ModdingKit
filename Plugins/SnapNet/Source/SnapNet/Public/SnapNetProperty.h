#pragma once
#include "CoreMinimal.h"
#include "ESnapNetPropertyRelevance.h"
#include "SnapNetProperty.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetPropertyRelevance Relevance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAsEventId;
    
public:
    FSnapNetProperty();
};

