#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionAPIError.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionAPIError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    NEXUSUNREALSDK_API FNexusAttributionAPIError();
};

