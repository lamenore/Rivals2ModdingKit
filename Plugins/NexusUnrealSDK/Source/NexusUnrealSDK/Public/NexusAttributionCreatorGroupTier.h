#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionCreatorGroupTier.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionCreatorGroupTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double revShare;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double memberCount;
    
    NEXUSUNREALSDK_API FNexusAttributionCreatorGroupTier();
};

