#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterLevelReward.h"
#include "RivalsCharacterProgressionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRivalsCharacterProgressionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsCharacterLevelReward> Levels;
    
    RIVALS2_API FRivalsCharacterProgressionSettings();
};

