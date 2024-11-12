#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "StringDropdownPopup.generated.h"

class UStringDropdownOption;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStringDropdownPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ChoiceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStringDropdownOption> OptionClassInstance;
    
public:
    UStringDropdownPopup();

};

