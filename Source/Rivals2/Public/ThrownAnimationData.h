#pragma once
#include "CoreMinimal.h"
#include "EThrownAnimationType.h"
#include "ThrownAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FThrownAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimStartWindowStringTableKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimStartWindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThrownAnimationType ThrownAnimation;
    
    RIVALS2_API FThrownAnimationData();
};

