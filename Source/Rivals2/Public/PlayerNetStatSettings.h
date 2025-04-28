#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EPlayerNetStatQuality.h"
#include "PlayerNetStatSettings.generated.h"

class UTexture2D;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API UPlayerNetStatSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, TSoftObjectPtr<UTexture2D>> PingQualityIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, int32> PingQualityBreakpoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, int32> JitterQualityBreakpoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, FLinearColor> QualityColorMap;
    
    UPlayerNetStatSettings();

};

