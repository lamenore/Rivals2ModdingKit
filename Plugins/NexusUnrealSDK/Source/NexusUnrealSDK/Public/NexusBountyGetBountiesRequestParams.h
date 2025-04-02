#pragma once
#include "CoreMinimal.h"
#include "NexusBountyGetBountiesRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyGetBountiesRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    NEXUSUNREALSDK_API FNexusBountyGetBountiesRequestParams();
};

