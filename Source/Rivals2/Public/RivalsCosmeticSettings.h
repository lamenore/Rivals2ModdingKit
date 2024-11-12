#pragma once
#include "CoreMinimal.h"
#include "RivalsCosmeticSettings.generated.h"

class UDeathEffectData;
class UIconData;
class URespawnPlatformData;
class URivalsCharacterSkinDefinition;

USTRUCT(BlueprintType)
struct FRivalsCosmeticSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URespawnPlatformData> DefaultRespawnPlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<URivalsCharacterSkinDefinition>, TSoftClassPtr<URespawnPlatformData>> RespawnPlatformSkinOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDeathEffectData> DefaultDeathEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<URivalsCharacterSkinDefinition>, TSoftClassPtr<UDeathEffectData>> DeathEffectSkinOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIconData> PlayerIconData;
    
    RIVALS2_API FRivalsCosmeticSettings();
};

