#pragma once
#include "CoreMinimal.h"
#include "StoreTabInterface.h"
#include "Templates/SubclassOf.h"
#include "InventoryStoreTab.generated.h"

class UItemPreview;
class UStoreCheckbox;
class UStoreDropdown;
class UStoreItem;
class UUniformGridPanel;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UInventoryStoreTab : public UStoreTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStoreItem> BP_StoreItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemPreview* BP_ItemPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* BP_InventoryGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_LeftSideContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreDropdown* BP_SortByDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreDropdown* BP_FilterDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreDropdown* BP_CharacterFilterDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreCheckbox* BP_ShowDefaultsCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsPerRow;
    
public:
    UInventoryStoreTab();

};

