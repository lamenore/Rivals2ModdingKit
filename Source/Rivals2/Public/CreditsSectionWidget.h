#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsSectionWidget.generated.h"

class UHorizonDialogueMsgTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCreditsSectionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizonDialogueMsgTextBlock* BP_TextBlock;
    
    UCreditsSectionWidget();

};

