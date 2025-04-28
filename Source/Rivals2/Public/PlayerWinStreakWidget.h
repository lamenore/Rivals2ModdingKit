#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWinStreakWidget.generated.h"

class UImage;
class UNiagaraSystemWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerWinStreakWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRightSide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_Text_WinStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_StreakFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraSystemWidget* BP_StreakEmbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_FireLoopAnim;
    
public:
    UPlayerWinStreakWidget();

    UFUNCTION(BlueprintCallable)
    void SetupWithWinStreak(const int32 InWinStreak);
    
    UFUNCTION(BlueprintCallable)
    void SetupText(const int32 InWinStreak);
    
    UFUNCTION(BlueprintCallable)
    void SetupForResults(const int32 InPrevWinStreak, const int32 InNewWinStreak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWinStreakStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWinStreakLoss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWinStreakGain(const int32 InPrevWinStreak, const int32 InNewWinStreak);
    
};

