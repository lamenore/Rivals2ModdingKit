#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RivalsEdgegapServerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsEdgegapServerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartupDelay;
    
    URivalsEdgegapServerSettings();

};

