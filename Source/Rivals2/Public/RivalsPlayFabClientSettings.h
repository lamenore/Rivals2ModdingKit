#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RivalsPlayFabClientSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class RIVALS2_API URivalsPlayFabClientSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    URivalsPlayFabClientSettings();

};

