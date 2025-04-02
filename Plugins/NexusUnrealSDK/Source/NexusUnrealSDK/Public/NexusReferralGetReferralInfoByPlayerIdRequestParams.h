#pragma once
#include "CoreMinimal.h"
#include "NexusReferralGetReferralInfoByPlayerIdRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusReferralGetReferralInfoByPlayerIdRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool excludeReferralList;
    
    NEXUSUNREALSDK_API FNexusReferralGetReferralInfoByPlayerIdRequestParams();
};

