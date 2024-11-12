#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapServerPort.h"
#include "RivalsEdgegapServerPorts.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEdgegapServerPorts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsEdgegapServerPort GamePort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsEdgegapServerPort web;
    
    RIVALS2_API FRivalsEdgegapServerPorts();
};

