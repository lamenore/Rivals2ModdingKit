#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERivalsColorSlot.h"
#include "Templates/SubclassOf.h"
#include "RivalsUserSettings.generated.h"

class UDeathEffectData;
class URespawnPlatformData;
class URivalsCharacterSkinDefinition;

UCLASS(Blueprintable)
class RIVALS2_API URivalsUserSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<URivalsCharacterSkinDefinition>> SkinChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERivalsColorSlot> ColorSlotChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugStockSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URespawnPlatformData>> RespawnPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDeathEffectData>> DeathEffects;
    
    URivalsUserSettings();

};

