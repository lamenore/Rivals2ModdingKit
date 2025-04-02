#pragma once
#include "CoreMinimal.h"
#include "NexusReferralGetPlayerCurrentReferral404Response.generated.h"

USTRUCT(BlueprintType)
struct FNexusReferralGetPlayerCurrentReferral404Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    NEXUSUNREALSDK_API FNexusReferralGetPlayerCurrentReferral404Response();
};

