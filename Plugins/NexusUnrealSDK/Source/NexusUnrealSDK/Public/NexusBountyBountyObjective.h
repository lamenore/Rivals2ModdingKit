#pragma once
#include "CoreMinimal.h"
#include "NexusBountyBountySku.h"
#include "NexusBountycategory_Struct.h"
#include "NexusBountypublisher_Struct.h"
#include "NexusBountyBountyObjective.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyBountyObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Condition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString eventCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nexusPurchaseObjectiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountyBountySku> skus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountycategory_Struct Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountypublisher_Struct publisher;
    
    NEXUSUNREALSDK_API FNexusBountyBountyObjective();
};

