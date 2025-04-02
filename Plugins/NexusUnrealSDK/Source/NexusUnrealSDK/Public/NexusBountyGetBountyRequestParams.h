#pragma once
#include "CoreMinimal.h"
#include "NexusBountyGetBountyRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyGetBountyRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool includeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bountyId;
    
    NEXUSUNREALSDK_API FNexusBountyGetBountyRequestParams();
};

