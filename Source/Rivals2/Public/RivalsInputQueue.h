#pragma once
#include "CoreMinimal.h"
#include "RivalsInputQueue.generated.h"

USTRUCT(BlueprintType)
struct FRivalsInputQueue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestInputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrame;
    
public:
    RIVALS2_API FRivalsInputQueue();
};

