#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "TitleScreenWidget.generated.h"

class UBorder;
class UButton;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTitleScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BP_NextScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_PressStartText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_NetworkVisualContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_EntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_LoadingLoopAnim;
    
public:
    UTitleScreenWidget();

    UFUNCTION(BlueprintCallable)
    void SwapToMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReallyLeaveToMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayConstructAnim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitialDataFetchingFirstStepFinishedDynamicMulticastDelegate(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnInitialDataFetchingFinalStepFinishedDynamicMulticastDelegate(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectToPlayFabServicesSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectToPlayFabServicesError(FText ErrorReport);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void InitiateLogin();
    
};

