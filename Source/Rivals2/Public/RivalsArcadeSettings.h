#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RivalsTargetBreakLevel.h"
#include "RivalsArcadeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsArcadeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRivalsTargetBreakLevel> TargetBreakCharMap;
    
    URivalsArcadeSettings();

};

