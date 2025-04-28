#pragma once
#include "CoreMinimal.h"
#include "RivalsInputListenerData.h"
#include "RivalsInputListener.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FRivalsInputListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsInputListenerData> ListenerData;
    
public:
    FRivalsInputListener();
};

