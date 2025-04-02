#pragma once
#include "CoreMinimal.h"
#include "NexusBountyBounty.h"
#include "NexusBountyprogress_Struct.h"
#include "NexusBountyGetBounty200Response.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyGetBounty200Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountyBounty bounty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountyprogress_Struct progress;
    
    NEXUSUNREALSDK_API FNexusBountyGetBounty200Response();
};

