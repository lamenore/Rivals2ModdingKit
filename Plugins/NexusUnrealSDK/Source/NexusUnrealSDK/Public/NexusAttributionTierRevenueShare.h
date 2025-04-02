#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionTierRevenueShare.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionTierRevenueShare {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double revShare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tierId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tierName;
    
    NEXUSUNREALSDK_API FNexusAttributionTierRevenueShare();
};

