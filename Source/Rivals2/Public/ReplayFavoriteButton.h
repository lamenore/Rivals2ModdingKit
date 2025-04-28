#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReplayFavoriteButton.generated.h"

class UImage;
class URivalsButtonWidget;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplayFavoriteButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ActiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InactiveTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnUnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnPressAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnReleaseAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_BaseImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_HoverImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
public:
    UReplayFavoriteButton();

    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLostFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocus(const int32 UserIndex);
    
};

