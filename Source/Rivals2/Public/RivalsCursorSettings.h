#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Curves/CurveFloat.h"
#include "RivalsCursorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsCursorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CursorAccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCursorSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorRadius;
    
public:
    URivalsCursorSettings();

};

