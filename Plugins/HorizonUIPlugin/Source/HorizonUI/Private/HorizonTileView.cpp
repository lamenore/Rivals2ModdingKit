#include "HorizonTileView.h"

UHorizonTileView::UHorizonTileView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    
    this->bIsFocusable = false;
    this->RefreshBehavior = EHorizonTileViewRefreshBehavior::ScrollToBottom;
}

void UHorizonTileView::SynchronizeProperties() {
}

void UHorizonTileView::RerouteItemUnhovered(UObject* InItem) {
}

void UHorizonTileView::RerouteItemReleased(UObject* InItem) {
}

void UHorizonTileView::RerouteItemPressed(UObject* InItem) {
}

void UHorizonTileView::RerouteItemHovered(UObject* InItem) {
}

void UHorizonTileView::RerouteItemClicked(UObject* InItem) {
}

void UHorizonTileView::RequestListRefresh() {
}

void UHorizonTileView::RemoveItemAndKeepSelectedIndex(UObject* InItem) {
}

void UHorizonTileView::NavigateToAndSelectIndex(int32 InIndex) {
}

bool UHorizonTileView::IsPendingRefresh() {
    return false;
}

bool UHorizonTileView::IsFocusable() {
    return false;
}

void UHorizonTileView::InitListItem() {
}

int32 UHorizonTileView::GetNumGeneratedChildren() {
    return 0;
}

UHorizonListViewItemWidget* UHorizonTileView::BP_GetEntryWidgetFromItem(UObject* InItem) {
    return NULL;
}


