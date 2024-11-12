#pragma once
#include "CoreMinimal.h"
#include "RivalsRandomCharacterSettings.generated.h"

USTRUCT(BlueprintType)
struct FRivalsRandomCharacterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSkinsEnabled;
    
    RIVALS2_API FRivalsRandomCharacterSettings();
};

