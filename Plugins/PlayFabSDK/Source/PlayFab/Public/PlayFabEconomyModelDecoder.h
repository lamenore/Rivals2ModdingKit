#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EconomyAddInventoryItemsResponse.h"
#include "EconomyCreateDraftItemResponse.h"
#include "EconomyCreateUploadUrlsResponse.h"
#include "EconomyDeleteEntityItemReviewsResponse.h"
#include "EconomyDeleteInventoryCollectionResponse.h"
#include "EconomyDeleteInventoryItemsResponse.h"
#include "EconomyDeleteItemResponse.h"
#include "EconomyExecuteInventoryOperationsResponse.h"
#include "EconomyExecuteTransferOperationsResponse.h"
#include "EconomyGetCatalogConfigResponse.h"
#include "EconomyGetDraftItemResponse.h"
#include "EconomyGetDraftItemsResponse.h"
#include "EconomyGetEntityDraftItemsResponse.h"
#include "EconomyGetEntityItemReviewResponse.h"
#include "EconomyGetInventoryCollectionIdsResponse.h"
#include "EconomyGetInventoryItemsResponse.h"
#include "EconomyGetInventoryOperationStatusResponse.h"
#include "EconomyGetItemContainersResponse.h"
#include "EconomyGetItemModerationStateResponse.h"
#include "EconomyGetItemPublishStatusResponse.h"
#include "EconomyGetItemResponse.h"
#include "EconomyGetItemReviewSummaryResponse.h"
#include "EconomyGetItemReviewsResponse.h"
#include "EconomyGetItemsResponse.h"
#include "EconomyGetMicrosoftStoreAccessTokensResponse.h"
#include "EconomyGetTransactionHistoryResponse.h"
#include "EconomyPublishDraftItemResponse.h"
#include "EconomyPurchaseInventoryItemsResponse.h"
#include "EconomyRedeemAppleAppStoreInventoryItemsResponse.h"
#include "EconomyRedeemGooglePlayInventoryItemsResponse.h"
#include "EconomyRedeemMicrosoftStoreInventoryItemsResponse.h"
#include "EconomyRedeemNintendoEShopInventoryItemsResponse.h"
#include "EconomyRedeemPlayStationStoreInventoryItemsResponse.h"
#include "EconomyRedeemSteamInventoryItemsResponse.h"
#include "EconomyReportItemResponse.h"
#include "EconomyReportItemReviewResponse.h"
#include "EconomyReviewItemResponse.h"
#include "EconomySearchItemsResponse.h"
#include "EconomySetItemModerationStateResponse.h"
#include "EconomySubmitItemReviewVoteResponse.h"
#include "EconomySubtractInventoryItemsResponse.h"
#include "EconomyTakedownItemReviewsResponse.h"
#include "EconomyTransferInventoryItemsResponse.h"
#include "EconomyUpdateCatalogConfigResponse.h"
#include "EconomyUpdateDraftItemResponse.h"
#include "EconomyUpdateInventoryItemsResponse.h"
#include "PlayFabEconomyModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEconomyModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabEconomyModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateInventoryItemsResponse decodeUpdateInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateDraftItemResponse decodeUpdateDraftItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyUpdateCatalogConfigResponse decodeUpdateCatalogConfigResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyTransferInventoryItemsResponse decodeTransferInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyTakedownItemReviewsResponse decodeTakedownItemReviewsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySubtractInventoryItemsResponse decodeSubtractInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySubmitItemReviewVoteResponse decodeSubmitItemReviewVoteResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySetItemModerationStateResponse decodeSetItemModerationStateResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomySearchItemsResponse decodeSearchItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReviewItemResponse decodeReviewItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReportItemReviewResponse decodeReportItemReviewResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyReportItemResponse decodeReportItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyRedeemSteamInventoryItemsResponse decodeRedeemSteamInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyRedeemPlayStationStoreInventoryItemsResponse decodeRedeemPlayStationStoreInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyRedeemNintendoEShopInventoryItemsResponse decodeRedeemNintendoEShopInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyRedeemMicrosoftStoreInventoryItemsResponse decodeRedeemMicrosoftStoreInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyRedeemGooglePlayInventoryItemsResponse decodeRedeemGooglePlayInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyRedeemAppleAppStoreInventoryItemsResponse decodeRedeemAppleAppStoreInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyPurchaseInventoryItemsResponse decodePurchaseInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyPublishDraftItemResponse decodePublishDraftItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetTransactionHistoryResponse decodeGetTransactionHistoryResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetMicrosoftStoreAccessTokensResponse decodeGetMicrosoftStoreAccessTokensResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemsResponse decodeGetItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemReviewSummaryResponse decodeGetItemReviewSummaryResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemReviewsResponse decodeGetItemReviewsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemResponse decodeGetItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemPublishStatusResponse decodeGetItemPublishStatusResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemModerationStateResponse decodeGetItemModerationStateResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetItemContainersResponse decodeGetItemContainersResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetInventoryOperationStatusResponse decodeGetInventoryOperationStatusResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetInventoryItemsResponse decodeGetInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetInventoryCollectionIdsResponse decodeGetInventoryCollectionIdsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetEntityItemReviewResponse decodeGetEntityItemReviewResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetEntityDraftItemsResponse decodeGetEntityDraftItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetDraftItemsResponse decodeGetDraftItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetDraftItemResponse decodeGetDraftItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyGetCatalogConfigResponse decodeGetCatalogConfigResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyExecuteTransferOperationsResponse decodeExecuteTransferOperationsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyExecuteInventoryOperationsResponse decodeExecuteInventoryOperationsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteItemResponse decodeDeleteItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteInventoryItemsResponse decodeDeleteInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteInventoryCollectionResponse decodeDeleteInventoryCollectionResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyDeleteEntityItemReviewsResponse decodeDeleteEntityItemReviewsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateUploadUrlsResponse decodeCreateUploadUrlsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyCreateDraftItemResponse decodeCreateDraftItemResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FEconomyAddInventoryItemsResponse decodeAddInventoryItemsResponseResponse(UPlayFabJsonObject* Response);
    
};

