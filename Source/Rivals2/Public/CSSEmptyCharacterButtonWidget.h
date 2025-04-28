#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CSSEmptyCharacterButtonWidget.generated.h"

class UCharacterSelectScreen;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCSSEmptyCharacterButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectScreen* ParentCharacterSelectScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_PrimaryGradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_SecondaryGradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ElementPrimaryGradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ElementSecondaryGradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ElementImage;
    
public:
    UCSSEmptyCharacterButtonWidget();

};

