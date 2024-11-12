#pragma once
#include "CoreMinimal.h"
#include "StoreTabInterface.h"
#include "Templates/SubclassOf.h"
#include "EventsStoreTab.generated.h"

class UEventTrackStoreItem;
class UHorizontalBox;
class UImage;
class UScrollBox;
class UStoreItem;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UEventsStoreTab : public UStoreTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsPerRow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_EventBannerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_EventTrackBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* BP_ItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_MainStoreScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStoreItem> BP_StoreItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventTrackStoreItem> BP_EventTrackItemInstance;
    
public:
    UEventsStoreTab();

};

