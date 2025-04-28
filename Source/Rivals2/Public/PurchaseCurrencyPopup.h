#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "PurchaseCurrencyPopup.generated.h"

class UMenuButtonWidget;
class URivalsMenuButtonWidget;
class UStoreItem;
class UTextBlock;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPurchaseCurrencyPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* BP_ItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStoreItem> BP_StoreItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CreatorSupportButton;
    
public:
    UPurchaseCurrencyPopup();

protected:
    UFUNCTION(BlueprintCallable)
    void OnClosePressed(int32 UserIndex);
    
};

