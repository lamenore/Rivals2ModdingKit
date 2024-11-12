#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "Templates/SubclassOf.h"
#include "MainMenuInventoryTab.generated.h"

class UInventoryItemWidget;
class URivalsMenuButtonWidget;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuInventoryTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInventoryItemWidget> BP_InventoryItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_BackDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* BP_InventoryGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsPerRow;
    
public:
    UMainMenuInventoryTab();

};

