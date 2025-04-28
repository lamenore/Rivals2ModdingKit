#pragma once
#include "CoreMinimal.h"
#include "BaseTopBar.h"
#include "SSSTopBar.generated.h"

class UBorder;
class UHorizontalBox;
class UProgressBar;
class UStageSelectScreen;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USSSTopBar : public UBaseTopBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_RegionNameHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_RegionNameTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_BackAreaBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_BackAreaHoverBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_OnHoldVisualContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* BP_BackProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackHeldAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackReleasedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackOnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BackOnUnHoverAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageSelectScreen* ParentScreen;
    
public:
    USSSTopBar();

    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonLostFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonFocus(const int32 UserIndex);
    
};

