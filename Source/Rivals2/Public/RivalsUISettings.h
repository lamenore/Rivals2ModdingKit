#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERivalsMenuState.h"
#include "ERivalsSessionState.h"
#include "RivalsUISettings.generated.h"

class UBasePopupWidget;
class UBaseScreenWidget;
class UMaterialInterface;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UBasePopupWidget>, TSoftClassPtr<UBasePopupWidget>> DialogMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UBaseScreenWidget>, TSoftClassPtr<UBaseScreenWidget>> ScreenMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsSessionState, ERivalsMenuState> SessionToMenuStateMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsSessionState, TSoftClassPtr<UBaseScreenWidget>> SessionToMenuTypeMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> RandomStageMaterial;
    
    URivalsUISettings();

};

