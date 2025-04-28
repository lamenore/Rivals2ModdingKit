#pragma once
#include "CoreMinimal.h"
#include "TextInputPopup.h"
#include "NexusInputPopup.generated.h"

class UMenuButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UNexusInputPopup : public UTextInputPopup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ClearButton;
    
public:
    UNexusInputPopup();

};

