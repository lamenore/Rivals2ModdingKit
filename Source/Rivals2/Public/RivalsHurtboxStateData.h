#pragma once
#include "CoreMinimal.h"
#include "ERivalsHurtboxState.h"
#include "RivalsHurtboxStateData.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FRivalsHurtboxStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HurtboxName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsHurtboxState HurtboxState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HurtboxActive;
    
    FRivalsHurtboxStateData();
};

