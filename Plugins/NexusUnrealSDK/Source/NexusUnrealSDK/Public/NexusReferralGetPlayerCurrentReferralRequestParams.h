#pragma once
#include "CoreMinimal.h"
#include "NexusReferralGetPlayerCurrentReferralRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusReferralGetPlayerCurrentReferralRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    NEXUSUNREALSDK_API FNexusReferralGetPlayerCurrentReferralRequestParams();
};

