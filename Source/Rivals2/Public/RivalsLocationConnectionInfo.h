#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapLocationInfo.h"
#include "RivalsRegionConnectionInfo.h"
#include "RivalsLocationConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsLocationConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsEdgegapLocationInfo LocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsRegionConnectionInfo ConnectionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BeaconNames;
    
    RIVALS2_API FRivalsLocationConnectionInfo();
};

