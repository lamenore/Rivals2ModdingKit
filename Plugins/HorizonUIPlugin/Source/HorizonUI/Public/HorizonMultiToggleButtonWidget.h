#pragma once
#include "CoreMinimal.h"
#include "HorizonDesignableUserWidget.h"
#include "HorizonMultiToggleButtonState.h"
#include "HorizonMultiToggleButtonWidget.generated.h"

class UButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HORIZONUI_API UHorizonMultiToggleButtonWidget : public UHorizonDesignableUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonMultiToggleButtonSyncEvent, int32, InCurrentStateIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHorizonMultiToggleButtonEvent, int32, InCurrentStateIndex, int32, InToStateIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonMultiToggleButtonSyncEvent OnStateSyncDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonMultiToggleButtonEvent OnStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_ToggleState_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_ToggleState_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHorizonMultiToggleButtonState> StateList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopToggleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStateIndex;
    
public:
    UHorizonMultiToggleButtonWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleState_Prev();
    
    UFUNCTION(BlueprintCallable)
    void ToggleState_Next();
    
    UFUNCTION(BlueprintCallable)
    void SetLoopToggleState(bool InLoopToggleState);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStateIndex(int32 InStateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetToggleState_PrevIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetToggleState_NextIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoopToggleState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateIndex();
    
};

