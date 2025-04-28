#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "StringDropdownOption.generated.h"

class UBorder;
class URivalsButtonWidget;
class USizeBox;
class UTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStringDropdownOption : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_BGBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_OptionNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnUnHoverAnim;
    
public:
    UStringDropdownOption();

private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateFromWidget(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLostByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedByPlayer(const int32 UserIndex);
    
};

