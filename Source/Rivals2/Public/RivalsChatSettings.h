#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RivalsChatSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsChatSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalChatStorageCap;
    
    URivalsChatSettings();

};

