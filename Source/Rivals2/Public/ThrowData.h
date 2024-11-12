#pragma once
#include "CoreMinimal.h"
#include "ThrowReleaseData.h"
#include "ThrownAnimationData.h"
#include "ThrowData.generated.h"

USTRUCT(BlueprintType)
struct FThrowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThrowReleaseData> ThrowReleaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThrownAnimationData> ThrownAnimationData;
    
    RIVALS2_API FThrowData();
};

