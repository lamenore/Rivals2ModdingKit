#include "EconomyTransferInventoryItemsRequest.h"

FEconomyTransferInventoryItemsRequest::FEconomyTransferInventoryItemsRequest() {
    this->Amount = 0;
    this->CustomTags = NULL;
    this->DeleteEmptyStacks = false;
    this->GivingEntity = NULL;
    this->GivingItem = NULL;
    this->NewStackValues = NULL;
    this->ReceivingEntity = NULL;
    this->ReceivingItem = NULL;
}

