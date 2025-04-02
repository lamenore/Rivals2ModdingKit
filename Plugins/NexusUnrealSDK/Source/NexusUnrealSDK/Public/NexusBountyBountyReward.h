#pragma once
#include "CoreMinimal.h"
#include "NexusBountyBountySku.h"
#include "NexusBountyBountyReward.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyBountyReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountyBountySku sku;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString externalId;
    
    NEXUSUNREALSDK_API FNexusBountyBountyReward();
};

