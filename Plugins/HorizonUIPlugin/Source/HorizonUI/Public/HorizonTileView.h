#pragma once
#include "CoreMinimal.h"
#include "Components/TileView.h"
#include "EHorizonTileViewRefreshBehavior.h"
#include "HorizonTileView.generated.h"

class UHorizonListViewItemWidget;
class UHorizonTileView;
class UObject;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonTileView : public UTileView {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemEvent, UObject*, InItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitListItemEvent, UHorizonTileView*, InTileView);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitListItemEvent OnInitListItemEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEvent OnItemPressedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEvent OnItemReleasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEvent OnItemHoveredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEvent OnItemUnhoveredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEvent OnItemClickedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorizonTileViewRefreshBehavior RefreshBehavior;
    
    UHorizonTileView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SynchronizeProperties();
    
    UFUNCTION(BlueprintCallable)
    void RerouteItemUnhovered(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    void RerouteItemReleased(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    void RerouteItemPressed(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    void RerouteItemHovered(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    void RerouteItemClicked(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    void RequestListRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemAndKeepSelectedIndex(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToAndSelectIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusable();
    
    UFUNCTION(BlueprintCallable)
    void InitListItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGeneratedChildren();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHorizonListViewItemWidget* BP_GetEntryWidgetFromItem(UObject* InItem);
    
};

