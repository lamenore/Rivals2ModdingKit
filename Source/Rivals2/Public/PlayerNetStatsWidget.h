#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerNetStatQuality.h"
#include "RivalsWidget.h"
#include "PlayerNetStatsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerNetStatsWidget : public URivalsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, int32> PingQualityBreakpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, int32> JitterQualityBreakpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerNetStatQuality, FLinearColor> QualityColorMap;
    
public:
    UPlayerNetStatsWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateNetStats(int32 PingInMs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPingQualityColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetJitterQualityColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJitter();
    
};

