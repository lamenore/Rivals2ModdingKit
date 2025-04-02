#pragma once
#include "CoreMinimal.h"
#include "NexusBountyGetMemberBountiesByIDRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyGetMemberBountiesByIDRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString memberId;
    
    NEXUSUNREALSDK_API FNexusBountyGetMemberBountiesByIDRequestParams();
};

