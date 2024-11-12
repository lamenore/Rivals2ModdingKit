#include "EconomyPurchaseInventoryItemsRequest.h"

FEconomyPurchaseInventoryItemsRequest::FEconomyPurchaseInventoryItemsRequest() {
    this->Amount = 0;
    this->CustomTags = NULL;
    this->DeleteEmptyStacks = false;
    this->DurationInSeconds = 0;
    this->Entity = NULL;
    this->Item = NULL;
    this->NewStackValues = NULL;
}

