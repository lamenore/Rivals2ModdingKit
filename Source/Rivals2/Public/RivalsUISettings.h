#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RivalsUISettings.generated.h"

class UBasePopupWidget;
class UBaseScreenWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UBasePopupWidget>, TSoftClassPtr<UBasePopupWidget>> DialogMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UBaseScreenWidget>, TSoftClassPtr<UBaseScreenWidget>> ScreenMap;
    
    URivalsUISettings();

};

