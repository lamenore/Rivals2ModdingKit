#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InputCoreTypes.h"
#include "ControllerVirtualKeyConversions.h"
#include "EInputDevice.h"
#include "RivalsControllerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsControllerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> AnalogStickKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> InvalidKeysForRemapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeysOnGameCubeController;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeysOnGenericController;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputDevice, FControllerVirtualKeyConversions> VirtualKeyConversions;
    
    URivalsControllerSettings();

};

