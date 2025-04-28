#pragma once
#include "CoreMinimal.h"
#include "BaseTopBar.h"
#include "GamewideTopBar.generated.h"

class UBorder;
class USupportCreatorButton;
class UTopBarCurrencyDisplayer;
class UTopBarPlayerCard;
class UTopBarPlayerSlotPopup;
class UUIButtonDisplayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UGamewideTopBar : public UBaseTopBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarCurrencyDisplayer* BP_CoinCurrencyDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarCurrencyDisplayer* BP_BuckCurrencyDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarCurrencyDisplayer* BP_MedalCurrencyDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarPlayerSlotPopup* BP_TopBarPlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarPlayerCard* BP_PlayerCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_BackAreaBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIButtonDisplayer* BP_BackDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackOnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackOnUnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USupportCreatorButton* BP_NexusSupportCreatorButton;
    
    UGamewideTopBar();

    UFUNCTION(BlueprintCallable)
    void OnPlayerCardButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCardButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCardButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonLostFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonFocus(const int32 UserIndex);
    
};

