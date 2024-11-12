#pragma once
#include "CoreMinimal.h"
#include "GamePort.generated.h"

USTRUCT(BlueprintType)
struct FGamePort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerListeningPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientConnectionPort;
    
    PLAYFABGSDK_API FGamePort();
};

