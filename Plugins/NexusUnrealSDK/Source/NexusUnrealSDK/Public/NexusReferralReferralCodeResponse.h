#pragma once
#include "CoreMinimal.h"
#include "NexusReferralReferralCodeResponse.generated.h"

USTRUCT(BlueprintType)
struct FNexusReferralReferralCodeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isManaged;
    
    NEXUSUNREALSDK_API FNexusReferralReferralCodeResponse();
};

