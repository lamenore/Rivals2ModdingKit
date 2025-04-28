#pragma once
#include "CoreMinimal.h"
#include "PlayerGetMatchAccountData.h"
#include "PlayerGetMatchLatencyInfo.h"
#include "PlayerGetMatchAttributesData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGetMatchAttributesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerGetMatchLatencyInfo> Latencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Elo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Separator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGetMatchAccountData AccountData;
    
    RIVALS2_API FPlayerGetMatchAttributesData();
};

