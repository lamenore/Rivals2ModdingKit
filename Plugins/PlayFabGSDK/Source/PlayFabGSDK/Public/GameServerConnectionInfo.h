#pragma once
#include "CoreMinimal.h"
#include "GamePort.h"
#include "GameServerConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameServerConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PublicIpV4Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamePort> GamePortsConfiguration;
    
    PLAYFABGSDK_API FGameServerConnectionInfo();
};

