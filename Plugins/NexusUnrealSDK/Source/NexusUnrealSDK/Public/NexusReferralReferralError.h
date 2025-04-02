#pragma once
#include "CoreMinimal.h"
#include "NexusReferralReferralError.generated.h"

USTRUCT(BlueprintType)
struct FNexusReferralReferralError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    NEXUSUNREALSDK_API FNexusReferralReferralError();
};

