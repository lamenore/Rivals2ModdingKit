#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapLocationBeaconInfo.h"
#include "RivalsEdgegapLocationBeaconResponse.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEdgegapLocationBeaconResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsEdgegapLocationBeaconInfo> locations;
    
    RIVALS2_API FRivalsEdgegapLocationBeaconResponse();
};

