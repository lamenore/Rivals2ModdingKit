#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "HorizonFlipbookWidget.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonFlipbookWidget : public UImage {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonFlipbookStartEvent, int32, InCurrentNumOfLoop);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHorizonFlipbookEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* PaperFlipbook;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonFlipbookStartEvent OnAnimationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonFlipbookEvent OnAnimationFinished;
    
    UHorizonFlipbookWidget();

    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetFlipbook(UPaperFlipbook* InFlipbook);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAnimationDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAnimation();
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PauseAnimation();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentAnimationDuration();
    
};

