#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapLocationInfo.h"
#include "RivalsEdgegapLocationBeaconInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEdgegapLocationBeaconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Host;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsEdgegapLocationInfo Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 udp_port;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tcp_port;
    
    RIVALS2_API FRivalsEdgegapLocationBeaconInfo();
};

