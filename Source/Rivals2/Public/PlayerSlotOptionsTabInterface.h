#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerSlotOptionsTabInterface.generated.h"

class UPlayerSlotOptionsMenuWidget;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPlayerSlotOptionsTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ButtonsContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsMenuWidget* ParentMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidgetBeforeTabLeft;
    
public:
    UPlayerSlotOptionsTabInterface();

};

