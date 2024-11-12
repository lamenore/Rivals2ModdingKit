#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RivalsWidget.h"
#include "PlayerSlotTagEntryConfirmButton.generated.h"

class UBorder;
class URivalsButtonWidget;
class UUIButtonDisplayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotTagEntryConfirmButton : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoverColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnUnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIButtonDisplayer* BP_ButtonDisplayer;
    
    UPlayerSlotTagEntryConfirmButton();

    UFUNCTION(BlueprintCallable)
    void OnLostFocusRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusReceivedRelay(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedRelay(const int32 UserIndex);
    
};

