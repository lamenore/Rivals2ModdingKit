#include "EconomySubtractInventoryItemsRequest.h"

FEconomySubtractInventoryItemsRequest::FEconomySubtractInventoryItemsRequest() {
    this->Amount = 0;
    this->CustomTags = NULL;
    this->DeleteEmptyStacks = false;
    this->DurationInSeconds = 0;
    this->Entity = NULL;
    this->Item = NULL;
}

