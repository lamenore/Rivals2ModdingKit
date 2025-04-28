#pragma once
#include "CoreMinimal.h"
#include "RivalsRegionMapping.generated.h"

USTRUCT(BlueprintType)
struct FRivalsRegionMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> beacons;
    
    RIVALS2_API FRivalsRegionMapping();
};

