#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CssPuckButton.generated.h"

class UCharacterSelectButton;
class UCharacterSelectScreen;
class UCssPuck;
class URandomSelectButton;
class URivalsButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCssPuckButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPuck* BP_CSSPuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectScreen* ParentCSSMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectButton* ParentCharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URandomSelectButton* ParentRandomButton;
    
public:
    UCssPuckButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonUnhovered(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered(const int32 UserIndex);
    
};

