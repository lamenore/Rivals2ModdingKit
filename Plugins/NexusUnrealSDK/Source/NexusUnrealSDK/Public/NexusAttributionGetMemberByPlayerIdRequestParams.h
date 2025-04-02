#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionGetMemberByPlayerIdRequestParams.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionGetMemberByPlayerIdRequestParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    NEXUSUNREALSDK_API FNexusAttributionGetMemberByPlayerIdRequestParams();
};

