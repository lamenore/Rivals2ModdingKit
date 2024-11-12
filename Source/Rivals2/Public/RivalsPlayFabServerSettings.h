#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RivalsPlayFabServerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsPlayFabServerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    URivalsPlayFabServerSettings();

};

