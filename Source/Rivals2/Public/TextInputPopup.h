#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "TextInputPopup.generated.h"

class UGenericInputFieldWidget;
class UMenuButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTextInputPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InputHintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TitleRichTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_BodyRichTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_InputField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ConfirmButton;
    
public:
    UTextInputPopup();

    UFUNCTION(BlueprintCallable)
    void OnConfirmPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClosePressed(const int32 UserIndex);
    
};

