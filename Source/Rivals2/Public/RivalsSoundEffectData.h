#pragma once
#include "CoreMinimal.h"
#include "ERivalsSoundEventPriority.h"
#include "RivalsSoundEffectData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FRivalsSoundEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFMODEvent> SoundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsSoundEventPriority SoundPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SkinOverrideNames;
    
    RIVALS2_API FRivalsSoundEffectData();
};

