#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnlineTimerWidget.generated.h"

class UImage;
class UScaleBox;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UOnlineTimerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_TimerSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_NoticeScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_NoticeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ImageBG;
    
public:
    UOnlineTimerWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTimer(float InTimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNotice(FText InNotice);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLowTimeTick();
    
};

