#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RivalsUIManagerHelpers.generated.h"

class UMainMenuScreenWidget;
class UReplaySettingsPopup;
class USettingsMenuWidget;
class UTitleScreenWidget;
class UTrainingMenuPopup;

UCLASS(Blueprintable)
class RIVALS2_API URivalsUIManagerHelpers : public UObject {
    GENERATED_BODY()
public:
    URivalsUIManagerHelpers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTrainingMenuPopup* OpenTrainingMenuPopup(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTitleScreenWidget* OpenTitleScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USettingsMenuWidget* OpenSettingsPopup(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UReplaySettingsPopup* OpenReplaySettingsPopup(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMainMenuScreenWidget* OpenMainMenuScreen(const UObject* WorldContextObject);
    
};

