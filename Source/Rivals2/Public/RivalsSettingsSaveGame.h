#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameplaySettings.h"
#include "GraphicsSettings.h"
#include "VolumeSettings.h"
#include "RivalsSettingsSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsSettingsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVolumeSettings VolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphicsSettings GraphicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplaySettings GameplaySettings;
    
    URivalsSettingsSaveGame();

};

