#pragma once
#include "CoreMinimal.h"
#include "NexusReferralGetReferralInfoByCodeRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusReferralGetReferralInfoByCodeRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool excludeReferralList;
    
    NEXUSUNREALSDK_API FNexusReferralGetReferralInfoByCodeRequestParams();
};

