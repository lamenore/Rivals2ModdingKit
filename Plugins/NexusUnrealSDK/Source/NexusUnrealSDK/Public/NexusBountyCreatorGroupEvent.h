#pragma once
#include "CoreMinimal.h"
#include "NexusBountyCreatorGroupEvent.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyCreatorGroupEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString eventCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString referralCode;
    
    NEXUSUNREALSDK_API FNexusBountyCreatorGroupEvent();
};

