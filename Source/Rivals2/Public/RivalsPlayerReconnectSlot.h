#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayerReconnectSlot.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayerReconnectSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasActive;
    
    RIVALS2_API FRivalsPlayerReconnectSlot();
};

