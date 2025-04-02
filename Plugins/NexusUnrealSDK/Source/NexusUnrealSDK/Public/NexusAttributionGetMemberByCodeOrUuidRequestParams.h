#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionGetMemberByCodeOrUuidRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionGetMemberByCodeOrUuidRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString memberCodeOrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    NEXUSUNREALSDK_API FNexusAttributionGetMemberByCodeOrUuidRequestParams();
};

