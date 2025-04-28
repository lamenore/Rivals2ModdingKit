#pragma once
#include "CoreMinimal.h"
#include "PlayerGetMatchLatencyInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGetMatchLatencyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 latency;
    
    RIVALS2_API FPlayerGetMatchLatencyInfo();
};

