#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EconomyAddInventoryItemsRequest.h"
#include "EconomyAddInventoryItemsResponse.h"
#include "EconomyCreateDraftItemRequest.h"
#include "EconomyCreateDraftItemResponse.h"
#include "EconomyCreateUploadUrlsRequest.h"
#include "EconomyCreateUploadUrlsResponse.h"
#include "EconomyDeleteEntityItemReviewsRequest.h"
#include "EconomyDeleteEntityItemReviewsResponse.h"
#include "EconomyDeleteInventoryCollectionRequest.h"
#include "EconomyDeleteInventoryCollectionResponse.h"
#include "EconomyDeleteInventoryItemsRequest.h"
#include "EconomyDeleteInventoryItemsResponse.h"
#include "EconomyDeleteItemRequest.h"
#include "EconomyDeleteItemResponse.h"
#include "EconomyExecuteInventoryOperationsRequest.h"
#include "EconomyExecuteInventoryOperationsResponse.h"
#include "EconomyExecuteTransferOperationsRequest.h"
#include "EconomyExecuteTransferOperationsResponse.h"
#include "EconomyGetCatalogConfigRequest.h"
#include "EconomyGetCatalogConfigResponse.h"
#include "EconomyGetDraftItemRequest.h"
#include "EconomyGetDraftItemResponse.h"
#include "EconomyGetDraftItemsRequest.h"
#include "EconomyGetDraftItemsResponse.h"
#include "EconomyGetEntityDraftItemsRequest.h"
#include "EconomyGetEntityDraftItemsResponse.h"
#include "EconomyGetEntityItemReviewRequest.h"
#include "EconomyGetEntityItemReviewResponse.h"
#include "EconomyGetInventoryCollectionIdsRequest.h"
#include "EconomyGetInventoryCollectionIdsResponse.h"
#include "EconomyGetInventoryItemsRequest.h"
#include "EconomyGetInventoryItemsResponse.h"
#include "EconomyGetInventoryOperationStatusRequest.h"
#include "EconomyGetInventoryOperationStatusResponse.h"
#include "EconomyGetItemContainersRequest.h"
#include "EconomyGetItemContainersResponse.h"
#include "EconomyGetItemModerationStateRequest.h"
#include "EconomyGetItemModerationStateResponse.h"
#include "EconomyGetItemPublishStatusRequest.h"
#include "EconomyGetItemPublishStatusResponse.h"
#include "EconomyGetItemRequest.h"
#include "EconomyGetItemResponse.h"
#include "EconomyGetItemReviewSummaryRequest.h"
#include "EconomyGetItemReviewSummaryResponse.h"
#include "EconomyGetItemReviewsRequest.h"
#include "EconomyGetItemReviewsResponse.h"
#include "EconomyGetItemsRequest.h"
#include "EconomyGetItemsResponse.h"
#include "EconomyGetMicrosoftStoreAccessTokensRequest.h"
#include "EconomyGetMicrosoftStoreAccessTokensResponse.h"
#include "EconomyGetTransactionHistoryRequest.h"
#include "EconomyGetTransactionHistoryResponse.h"
#include "EconomyPublishDraftItemRequest.h"
#include "EconomyPublishDraftItemResponse.h"
#include "EconomyPurchaseInventoryItemsRequest.h"
#include "EconomyPurchaseInventoryItemsResponse.h"
#include "EconomyRedeemAppleAppStoreInventoryItemsRequest.h"
#include "EconomyRedeemAppleAppStoreInventoryItemsResponse.h"
#include "EconomyRedeemGooglePlayInventoryItemsRequest.h"
#include "EconomyRedeemGooglePlayInventoryItemsResponse.h"
#include "EconomyRedeemMicrosoftStoreInventoryItemsRequest.h"
#include "EconomyRedeemMicrosoftStoreInventoryItemsResponse.h"
#include "EconomyRedeemNintendoEShopInventoryItemsRequest.h"
#include "EconomyRedeemNintendoEShopInventoryItemsResponse.h"
#include "EconomyRedeemPlayStationStoreInventoryItemsRequest.h"
#include "EconomyRedeemPlayStationStoreInventoryItemsResponse.h"
#include "EconomyRedeemSteamInventoryItemsRequest.h"
#include "EconomyRedeemSteamInventoryItemsResponse.h"
#include "EconomyReportItemRequest.h"
#include "EconomyReportItemResponse.h"
#include "EconomyReportItemReviewRequest.h"
#include "EconomyReportItemReviewResponse.h"
#include "EconomyReviewItemRequest.h"
#include "EconomyReviewItemResponse.h"
#include "EconomySearchItemsRequest.h"
#include "EconomySearchItemsResponse.h"
#include "EconomySetItemModerationStateRequest.h"
#include "EconomySetItemModerationStateResponse.h"
#include "EconomySubmitItemReviewVoteRequest.h"
#include "EconomySubmitItemReviewVoteResponse.h"
#include "EconomySubtractInventoryItemsRequest.h"
#include "EconomySubtractInventoryItemsResponse.h"
#include "EconomyTakedownItemReviewsRequest.h"
#include "EconomyTakedownItemReviewsResponse.h"
#include "EconomyTransferInventoryItemsRequest.h"
#include "EconomyTransferInventoryItemsResponse.h"
#include "EconomyUpdateCatalogConfigRequest.h"
#include "EconomyUpdateCatalogConfigResponse.h"
#include "EconomyUpdateDraftItemRequest.h"
#include "EconomyUpdateDraftItemResponse.h"
#include "EconomyUpdateInventoryItemsRequest.h"
#include "EconomyUpdateInventoryItemsResponse.h"
#include "OnPlayFabEconomyRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabEconomyAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabEconomyAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEconomyAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateInventoryItems, FEconomyUpdateInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateDraftItem, FEconomyUpdateDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCatalogConfig, FEconomyUpdateCatalogConfigResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessTransferInventoryItems, FEconomyTransferInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessTakedownItemReviews, FEconomyTakedownItemReviewsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractInventoryItems, FEconomySubtractInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubmitItemReviewVote, FEconomySubmitItemReviewVoteResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetItemModerationState, FEconomySetItemModerationStateResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSearchItems, FEconomySearchItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReviewItem, FEconomyReviewItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportItemReview, FEconomyReportItemReviewResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportItem, FEconomyReportItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemSteamInventoryItems, FEconomyRedeemSteamInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemPlayStationStoreInventoryItems, FEconomyRedeemPlayStationStoreInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemNintendoEShopInventoryItems, FEconomyRedeemNintendoEShopInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemMicrosoftStoreInventoryItems, FEconomyRedeemMicrosoftStoreInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemGooglePlayInventoryItems, FEconomyRedeemGooglePlayInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemAppleAppStoreInventoryItems, FEconomyRedeemAppleAppStoreInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPurchaseInventoryItems, FEconomyPurchaseInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessPublishDraftItem, FEconomyPublishDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTransactionHistory, FEconomyGetTransactionHistoryResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetMicrosoftStoreAccessTokens, FEconomyGetMicrosoftStoreAccessTokensResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItems, FEconomyGetItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemReviewSummary, FEconomyGetItemReviewSummaryResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemReviews, FEconomyGetItemReviewsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemPublishStatus, FEconomyGetItemPublishStatusResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemModerationState, FEconomyGetItemModerationStateResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItemContainers, FEconomyGetItemContainersResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetItem, FEconomyGetItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetInventoryOperationStatus, FEconomyGetInventoryOperationStatusResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetInventoryItems, FEconomyGetInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetInventoryCollectionIds, FEconomyGetInventoryCollectionIdsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetEntityItemReview, FEconomyGetEntityItemReviewResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetEntityDraftItems, FEconomyGetEntityDraftItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftItems, FEconomyGetDraftItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetDraftItem, FEconomyGetDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogConfig, FEconomyGetCatalogConfigResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteTransferOperations, FEconomyExecuteTransferOperationsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteInventoryOperations, FEconomyExecuteInventoryOperationsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteItem, FEconomyDeleteItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteInventoryItems, FEconomyDeleteInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteInventoryCollection, FEconomyDeleteInventoryCollectionResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteEntityItemReviews, FEconomyDeleteEntityItemReviewsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateUploadUrls, FEconomyCreateUploadUrlsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateDraftItem, FEconomyCreateDraftItemResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddInventoryItems, FEconomyAddInventoryItemsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabEconomyRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabEconomyAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateInventoryItems(FEconomyUpdateInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateDraftItem(FEconomyUpdateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* UpdateCatalogConfig(FEconomyUpdateCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessUpdateCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* TransferInventoryItems(FEconomyTransferInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessTransferInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* TakedownItemReviews(FEconomyTakedownItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessTakedownItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SubtractInventoryItems(FEconomySubtractInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSubtractInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SubmitItemReviewVote(FEconomySubmitItemReviewVoteRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSubmitItemReviewVote onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SetItemModerationState(FEconomySetItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSetItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* SearchItems(FEconomySearchItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessSearchItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReviewItem(FEconomyReviewItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReviewItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReportItemReview(FEconomyReportItemReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportItemReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ReportItem(FEconomyReportItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessReportItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* RedeemSteamInventoryItems(FEconomyRedeemSteamInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessRedeemSteamInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* RedeemPlayStationStoreInventoryItems(FEconomyRedeemPlayStationStoreInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessRedeemPlayStationStoreInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* RedeemNintendoEShopInventoryItems(FEconomyRedeemNintendoEShopInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessRedeemNintendoEShopInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* RedeemMicrosoftStoreInventoryItems(FEconomyRedeemMicrosoftStoreInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessRedeemMicrosoftStoreInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* RedeemGooglePlayInventoryItems(FEconomyRedeemGooglePlayInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessRedeemGooglePlayInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* RedeemAppleAppStoreInventoryItems(FEconomyRedeemAppleAppStoreInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessRedeemAppleAppStoreInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PurchaseInventoryItems(FEconomyPurchaseInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPurchaseInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* PublishDraftItem(FEconomyPublishDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessPublishDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateDraftItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCatalogConfig(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperTransferInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperTakedownItemReviews(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubmitItemReviewVote(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetItemModerationState(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSearchItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReviewItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportItemReview(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemSteamInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemPlayStationStoreInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemNintendoEShopInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemMicrosoftStoreInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemGooglePlayInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemAppleAppStoreInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPurchaseInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperPublishDraftItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTransactionHistory(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetMicrosoftStoreAccessTokens(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemReviewSummary(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemReviews(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemPublishStatus(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemModerationState(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItemContainers(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetInventoryOperationStatus(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetInventoryCollectionIds(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetEntityItemReview(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetEntityDraftItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetDraftItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogConfig(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteTransferOperations(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteInventoryOperations(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteInventoryCollection(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteEntityItemReviews(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateUploadUrls(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateDraftItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetTransactionHistory(FEconomyGetTransactionHistoryRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetTransactionHistory onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetMicrosoftStoreAccessTokens(FEconomyGetMicrosoftStoreAccessTokensRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetMicrosoftStoreAccessTokens onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItems(FEconomyGetItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemReviewSummary(FEconomyGetItemReviewSummaryRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviewSummary onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemReviews(FEconomyGetItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemPublishStatus(FEconomyGetItemPublishStatusRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemPublishStatus onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemModerationState(FEconomyGetItemModerationStateRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemModerationState onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItemContainers(FEconomyGetItemContainersRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItemContainers onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetItem(FEconomyGetItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetInventoryOperationStatus(FEconomyGetInventoryOperationStatusRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetInventoryOperationStatus onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetInventoryItems(FEconomyGetInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetInventoryCollectionIds(FEconomyGetInventoryCollectionIdsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetInventoryCollectionIds onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetEntityItemReview(FEconomyGetEntityItemReviewRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetEntityItemReview onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetEntityDraftItems(FEconomyGetEntityDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetEntityDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftItems(FEconomyGetDraftItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetDraftItem(FEconomyGetDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* GetCatalogConfig(FEconomyGetCatalogConfigRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessGetCatalogConfig onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ExecuteTransferOperations(FEconomyExecuteTransferOperationsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessExecuteTransferOperations onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* ExecuteInventoryOperations(FEconomyExecuteInventoryOperationsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessExecuteInventoryOperations onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteItem(FEconomyDeleteItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteInventoryItems(FEconomyDeleteInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteInventoryCollection(FEconomyDeleteInventoryCollectionRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteInventoryCollection onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* DeleteEntityItemReviews(FEconomyDeleteEntityItemReviewsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessDeleteEntityItemReviews onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateUploadUrls(FEconomyCreateUploadUrlsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateUploadUrls onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* CreateDraftItem(FEconomyCreateDraftItemRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessCreateDraftItem onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEconomyAPI* AddInventoryItems(FEconomyAddInventoryItemsRequest Request, UPlayFabEconomyAPI::FDelegateOnSuccessAddInventoryItems onSuccess, UPlayFabEconomyAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

