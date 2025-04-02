#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NexusAttributionTierRevenueShare.h"
#include "NexusAttributionScheduledRevShare.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionScheduledRevShare {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double revShare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusAttributionTierRevenueShare> tierRevenueShares;
    
    NEXUSUNREALSDK_API FNexusAttributionScheduledRevShare();
};

