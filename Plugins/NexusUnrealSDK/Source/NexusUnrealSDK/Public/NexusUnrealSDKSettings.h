#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ENexusEnvironment.h"
#include "NexusUnrealSDKSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UNexusUnrealSDKSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PublicKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENexusEnvironment NexusEnvironment;
    
    UNexusUnrealSDKSettings();

};

