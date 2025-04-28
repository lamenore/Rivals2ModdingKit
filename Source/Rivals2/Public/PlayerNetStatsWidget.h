#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RivalsWidget.h"
#include "PlayerNetStatsWidget.generated.h"

class UImage;
class UScaleBox;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerNetStatsWidget : public URivalsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_Box_NetStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_Box_ConnectivityBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_Image_ConnectivityBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_Text_Ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_Text_Jitter;
    
public:
    UPlayerNetStatsWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateNetStats(int32 PingInMs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetSignalImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPingQualityColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetJitterQualityColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJitter();
    
};

