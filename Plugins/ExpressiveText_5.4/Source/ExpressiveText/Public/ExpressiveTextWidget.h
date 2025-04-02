#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExpressiveText.h"
#include "ExpressiveTextChronos.h"
#include "ExpressiveTextWidget.generated.h"

class UExpressiveTextRendererWidget;

UCLASS(Blueprintable, EditInlineNew)
class EXPRESSIVETEXT_API UExpressiveTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExpressiveTextRendererWidget* Renderer;
    
public:
    UExpressiveTextWidget();

    UFUNCTION(BlueprintCallable)
    void SkipReveal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChronos(FExpressiveTextChronos& OutChronos) const;
    
    UFUNCTION(BlueprintCallable)
    void DisplayText(UPARAM(Ref) FExpressiveText& Text);
    
};

