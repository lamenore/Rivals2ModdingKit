#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "TopBarPlayerSlotPopup.generated.h"

class UPlayerSlotOptionsMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTopBarPlayerSlotPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsMenuWidget* BP_PlayerSlotOptionsMenu;
    
    UTopBarPlayerSlotPopup();

};

