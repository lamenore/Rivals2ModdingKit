#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionPlayerMetadata.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionPlayerMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    NEXUSUNREALSDK_API FNexusAttributionPlayerMetadata();
};

