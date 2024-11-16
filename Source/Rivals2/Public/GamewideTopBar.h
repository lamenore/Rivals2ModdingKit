#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GamewideTopBar.generated.h"

class UBorder;
class URivalsButtonWidget;
class UTextBlock;
class UTopBarCurrencyDisplayer;
class UTopBarPlayerCard;
class UTopBarPlayerSlotPopup;
class UUIButtonDisplayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UGamewideTopBar : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ScreenNameTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarCurrencyDisplayer* BP_CoinCurrencyDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarCurrencyDisplayer* BP_BuckCurrencyDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarPlayerSlotPopup* BP_TopBarPlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarPlayerCard* BP_PlayerCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_BackAreaBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_BackAreaButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIButtonDisplayer* BP_BackDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackOnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackOnUnHoverAnim;
    
    UGamewideTopBar();

    UFUNCTION(BlueprintCallable)
    void OnPlayerCardButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCardButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCardButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnCoinCurrencyButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBuckCurrencyButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonLostFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonFocus(const int32 UserIndex);
    
};

