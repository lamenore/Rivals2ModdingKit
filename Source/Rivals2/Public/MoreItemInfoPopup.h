#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "MoreItemInfoPopup.generated.h"

class UEquipmentItemAsset;
class ULargeItemPurchasePreview;
class UPreviewItemEntry;
class URivalsMenuButtonWidget;
class USizeBox;
class UTextBlock;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMoreItemInfoPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_MainSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_SingleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULargeItemPurchasePreview* BP_SingleLargeItemPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_MultiBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_BundleIncludesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ChoiceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULargeItemPurchasePreview* BP_MultiLargeItemPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPreviewItemEntry> ItemEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CreatorSupportButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentItemAsset* InitialItem;
    
public:
    UMoreItemInfoPopup();

};

