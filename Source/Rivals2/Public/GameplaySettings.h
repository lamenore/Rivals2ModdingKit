#pragma once
#include "CoreMinimal.h"
#include "ERivalsCameraShakeStrength.h"
#include "ERivalsReplayAutoSaveSetting.h"
#include "GameplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FGameplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsCameraShakeStrength CameraShakeStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TeamOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsReplayAutoSaveSetting ReplayAutoSave;
    
    RIVALS2_API FGameplaySettings();
};

