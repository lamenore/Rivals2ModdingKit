#pragma once
#include "CoreMinimal.h"
#include "RivalsEventLevelReward.h"
#include "RivalsEventProgressionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEventProgressionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString skinline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skin_xp_boost_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_store_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsEventLevelReward> Levels;
    
    RIVALS2_API FRivalsEventProgressionSettings();
};

