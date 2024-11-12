#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "EMenuSoundType.h"
#include "OnPlayerInteractionDelegate.h"
#include "RivalsButtonWidget.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsButtonWidget : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSoundType ClickSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSoundType HoverOrFocusSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupportsMouseFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnClickedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnPressedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnReleasedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnHoveredByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnUnhoveredByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnAction2PressedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnAction2ReleasedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnAction3PressedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnAction3ReleasedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnAction4PressedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnAction4ReleasedByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnReceivedFocusByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnLostFocusByPlayer;
    
    URivalsButtonWidget();

    UFUNCTION(BlueprintCallable)
    void SetIsButtonFocusable(const bool bIsFocusable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnhoveredRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedFocusRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLostFocusRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction4ReleasedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction4PressedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction3ReleasedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction3PressedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction2ReleasedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction2PressedRelay(const int32 UserIndex);
    
};

