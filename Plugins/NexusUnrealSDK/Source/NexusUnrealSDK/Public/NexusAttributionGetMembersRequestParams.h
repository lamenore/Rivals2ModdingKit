#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionGetMembersRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionGetMembersRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    NEXUSUNREALSDK_API FNexusAttributionGetMembersRequestParams();
};

