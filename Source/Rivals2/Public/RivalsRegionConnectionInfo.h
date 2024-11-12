#pragma once
#include "CoreMinimal.h"
#include "RivalsRegionConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsRegionConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString REGION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AveragePing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Pings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptMatchmaking;
    
    RIVALS2_API FRivalsRegionConnectionInfo();
};

