#pragma once
#include "CoreMinimal.h"
#include "NexusBountyBountySku.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyBountySku {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString slug;
    
    NEXUSUNREALSDK_API FNexusBountyBountySku();
};

