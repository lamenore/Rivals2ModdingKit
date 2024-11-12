#pragma once
#include "CoreMinimal.h"
#include "ConnectedPlayer.generated.h"

USTRUCT(BlueprintType)
struct FConnectedPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    PLAYFABGSDK_API FConnectedPlayer();
};

