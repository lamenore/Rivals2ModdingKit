#pragma once
#include "CoreMinimal.h"
#include "RivalsLocationMMInfo.generated.h"

USTRUCT(BlueprintType)
struct FRivalsLocationMMInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lon;
    
    RIVALS2_API FRivalsLocationMMInfo();
};

