#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERivalsColorSlot.h"
#include "Templates/SubclassOf.h"
#include "RivalsDeveloperSettings.generated.h"

class UDeathEffectData;
class URespawnPlatformData;
class URivalsCharacterSkinDefinition;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class URivalsDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<URivalsCharacterSkinDefinition>> SkinChoices;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERivalsColorSlot> ColorSlotChoices;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugStockSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URespawnPlatformData>> RespawnPlatforms;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDeathEffectData>> DeathEffects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugMenuAudio;
    
    URivalsDeveloperSettings();

};

