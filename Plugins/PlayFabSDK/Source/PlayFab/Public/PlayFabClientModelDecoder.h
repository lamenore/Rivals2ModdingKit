#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClientAcceptTradeResponse.h"
#include "ClientAddFriendResult.h"
#include "ClientAddGenericIDResult.h"
#include "ClientAddOrUpdateContactEmailResult.h"
#include "ClientAddSharedGroupMembersResult.h"
#include "ClientAddUsernamePasswordResult.h"
#include "ClientAndroidDevicePushNotificationRegistrationResult.h"
#include "ClientAttributeInstallResult.h"
#include "ClientCancelTradeResponse.h"
#include "ClientConfirmPurchaseResult.h"
#include "ClientConsumeItemResult.h"
#include "ClientConsumeMicrosoftStoreEntitlementsResponse.h"
#include "ClientConsumePS5EntitlementsResult.h"
#include "ClientConsumePSNEntitlementsResult.h"
#include "ClientConsumeXboxEntitlementsResult.h"
#include "ClientCreateSharedGroupResult.h"
#include "ClientEmptyResponse.h"
#include "ClientEmptyResult.h"
#include "ClientExecuteCloudScriptResult.h"
#include "ClientGetAccountInfoResult.h"
#include "ClientGetAdPlacementsResult.h"
#include "ClientGetCatalogItemsResult.h"
#include "ClientGetCharacterDataResult.h"
#include "ClientGetCharacterInventoryResult.h"
#include "ClientGetCharacterLeaderboardResult.h"
#include "ClientGetCharacterStatisticsResult.h"
#include "ClientGetContentDownloadUrlResult.h"
#include "ClientGetFriendLeaderboardAroundPlayerResult.h"
#include "ClientGetFriendsListResult.h"
#include "ClientGetLeaderboardAroundCharacterResult.h"
#include "ClientGetLeaderboardAroundPlayerResult.h"
#include "ClientGetLeaderboardForUsersCharactersResult.h"
#include "ClientGetLeaderboardResult.h"
#include "ClientGetPaymentTokenResult.h"
#include "ClientGetPhotonAuthenticationTokenResult.h"
#include "ClientGetPlayFabIDsFromFacebookIDsResult.h"
#include "ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ClientGetPlayFabIDsFromGameCenterIDsResult.h"
#include "ClientGetPlayFabIDsFromGenericIDsResult.h"
#include "ClientGetPlayFabIDsFromGoogleIDsResult.h"
#include "ClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult.h"
#include "ClientGetPlayFabIDsFromKongregateIDsResult.h"
#include "ClientGetPlayFabIDsFromNintendoServiceAccountIdsResult.h"
#include "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ClientGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ClientGetPlayFabIDsFromPSNOnlineIDsResult.h"
#include "ClientGetPlayFabIDsFromSteamIDsResult.h"
#include "ClientGetPlayFabIDsFromTwitchIDsResult.h"
#include "ClientGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ClientGetPlayerCombinedInfoResult.h"
#include "ClientGetPlayerProfileResult.h"
#include "ClientGetPlayerSegmentsResult.h"
#include "ClientGetPlayerStatisticVersionsResult.h"
#include "ClientGetPlayerStatisticsResult.h"
#include "ClientGetPlayerTagsResult.h"
#include "ClientGetPlayerTradesResponse.h"
#include "ClientGetPublisherDataResult.h"
#include "ClientGetPurchaseResult.h"
#include "ClientGetSharedGroupDataResult.h"
#include "ClientGetStoreItemsResult.h"
#include "ClientGetTimeResult.h"
#include "ClientGetTitleDataResult.h"
#include "ClientGetTitleNewsResult.h"
#include "ClientGetTitlePublicKeyResult.h"
#include "ClientGetTradeStatusResponse.h"
#include "ClientGetUserDataResult.h"
#include "ClientGetUserInventoryResult.h"
#include "ClientGrantCharacterToUserResult.h"
#include "ClientLinkAndroidDeviceIDResult.h"
#include "ClientLinkCustomIDResult.h"
#include "ClientLinkFacebookAccountResult.h"
#include "ClientLinkFacebookInstantGamesIdResult.h"
#include "ClientLinkGameCenterAccountResult.h"
#include "ClientLinkGoogleAccountResult.h"
#include "ClientLinkGooglePlayGamesServicesAccountResult.h"
#include "ClientLinkIOSDeviceIDResult.h"
#include "ClientLinkKongregateAccountResult.h"
#include "ClientLinkNintendoSwitchDeviceIdResult.h"
#include "ClientLinkPSNAccountResult.h"
#include "ClientLinkSteamAccountResult.h"
#include "ClientLinkTwitchAccountResult.h"
#include "ClientLinkXboxAccountResult.h"
#include "ClientListUsersCharactersResult.h"
#include "ClientLoginResult.h"
#include "ClientModifyUserVirtualCurrencyResult.h"
#include "ClientOpenTradeResponse.h"
#include "ClientPayForPurchaseResult.h"
#include "ClientPurchaseItemResult.h"
#include "ClientRedeemCouponResult.h"
#include "ClientRegisterForIOSPushNotificationResult.h"
#include "ClientRegisterPlayFabUserResult.h"
#include "ClientRemoveContactEmailResult.h"
#include "ClientRemoveFriendResult.h"
#include "ClientRemoveGenericIDResult.h"
#include "ClientRemoveSharedGroupMembersResult.h"
#include "ClientReportAdActivityResult.h"
#include "ClientReportPlayerClientResult.h"
#include "ClientRestoreIOSPurchasesResult.h"
#include "ClientRewardAdActivityResult.h"
#include "ClientSendAccountRecoveryEmailResult.h"
#include "ClientSetFriendTagsResult.h"
#include "ClientSetPlayerSecretResult.h"
#include "ClientStartPurchaseResult.h"
#include "ClientUnlinkAndroidDeviceIDResult.h"
#include "ClientUnlinkCustomIDResult.h"
#include "ClientUnlinkFacebookAccountResult.h"
#include "ClientUnlinkFacebookInstantGamesIdResult.h"
#include "ClientUnlinkGameCenterAccountResult.h"
#include "ClientUnlinkGoogleAccountResult.h"
#include "ClientUnlinkGooglePlayGamesServicesAccountResult.h"
#include "ClientUnlinkIOSDeviceIDResult.h"
#include "ClientUnlinkKongregateAccountResult.h"
#include "ClientUnlinkNintendoSwitchDeviceIdResult.h"
#include "ClientUnlinkPSNAccountResult.h"
#include "ClientUnlinkSteamAccountResult.h"
#include "ClientUnlinkTwitchAccountResult.h"
#include "ClientUnlinkXboxAccountResult.h"
#include "ClientUnlockContainerItemResult.h"
#include "ClientUpdateCharacterDataResult.h"
#include "ClientUpdateCharacterStatisticsResult.h"
#include "ClientUpdatePlayerStatisticsResult.h"
#include "ClientUpdateSharedGroupDataResult.h"
#include "ClientUpdateUserDataResult.h"
#include "ClientUpdateUserTitleDisplayNameResult.h"
#include "ClientValidateAmazonReceiptResult.h"
#include "ClientValidateGooglePlayPurchaseResult.h"
#include "ClientValidateIOSReceiptResult.h"
#include "ClientValidateWindowsReceiptResult.h"
#include "ClientWriteEventResponse.h"
#include "PlayFabClientModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabClientModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FClientWriteEventResponse decodeWriteEventResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateWindowsReceiptResult decodeValidateWindowsReceiptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateIOSReceiptResult decodeValidateIOSReceiptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateGooglePlayPurchaseResult decodeValidateGooglePlayPurchaseResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientValidateAmazonReceiptResult decodeValidateAmazonReceiptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlockContainerItemResult decodeUnlockContainerItemResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkTwitchAccountResult decodeUnlinkTwitchAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkSteamAccountResult decodeUnlinkSteamAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkNintendoSwitchDeviceIdResult decodeUnlinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkKongregateAccountResult decodeUnlinkKongregateAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkIOSDeviceIDResult decodeUnlinkIOSDeviceIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGooglePlayGamesServicesAccountResult decodeUnlinkGooglePlayGamesServicesAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGoogleAccountResult decodeUnlinkGoogleAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkGameCenterAccountResult decodeUnlinkGameCenterAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkFacebookInstantGamesIdResult decodeUnlinkFacebookInstantGamesIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkFacebookAccountResult decodeUnlinkFacebookAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkCustomIDResult decodeUnlinkCustomIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientUnlinkAndroidDeviceIDResult decodeUnlinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientStartPurchaseResult decodeStartPurchaseResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSetFriendTagsResult decodeSetFriendTagsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRewardAdActivityResult decodeRewardAdActivityResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRestoreIOSPurchasesResult decodeRestoreIOSPurchasesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientReportPlayerClientResult decodeReportPlayerClientResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientReportAdActivityResult decodeReportAdActivityResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveGenericIDResult decodeRemoveGenericIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveFriendResult decodeRemoveFriendResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRemoveContactEmailResult decodeRemoveContactEmailResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRegisterPlayFabUserResult decodeRegisterPlayFabUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRegisterForIOSPushNotificationResult decodeRegisterForIOSPushNotificationResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientPurchaseItemResult decodePurchaseItemResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientPayForPurchaseResult decodePayForPurchaseResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientOpenTradeResponse decodeOpenTradeResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLoginResult decodeLoginResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkXboxAccountResult decodeLinkXboxAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkTwitchAccountResult decodeLinkTwitchAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkSteamAccountResult decodeLinkSteamAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkPSNAccountResult decodeLinkPSNAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkNintendoSwitchDeviceIdResult decodeLinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkKongregateAccountResult decodeLinkKongregateAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkIOSDeviceIDResult decodeLinkIOSDeviceIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGooglePlayGamesServicesAccountResult decodeLinkGooglePlayGamesServicesAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGoogleAccountResult decodeLinkGoogleAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkGameCenterAccountResult decodeLinkGameCenterAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkFacebookInstantGamesIdResult decodeLinkFacebookInstantGamesIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkFacebookAccountResult decodeLinkFacebookAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkCustomIDResult decodeLinkCustomIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientLinkAndroidDeviceIDResult decodeLinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTradeStatusResponse decodeGetTradeStatusResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitlePublicKeyResult decodeGetTitlePublicKeyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetTimeResult decodeGetTimeResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPurchaseResult decodeGetPurchaseResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromTwitchIDsResult decodeGetPlayFabIDsFromTwitchIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromPSNOnlineIDsResult decodeGetPlayFabIDsFromPSNOnlineIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromNintendoServiceAccountIdsResult decodeGetPlayFabIDsFromNintendoServiceAccountIdsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromKongregateIDsResult decodeGetPlayFabIDsFromKongregateIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult decodeGetPlayFabIDsFromGooglePlayGamesPlayerIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGoogleIDsResult decodeGetPlayFabIDsFromGoogleIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromGameCenterIDsResult decodeGetPlayFabIDsFromGameCenterIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerTradesResponse decodeGetPlayerTradesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPhotonAuthenticationTokenResult decodeGetPhotonAuthenticationTokenResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetPaymentTokenResult decodeGetPaymentTokenResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardAroundPlayerResult decodeGetLeaderboardAroundPlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetFriendsListResult decodeGetFriendsListResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetFriendLeaderboardAroundPlayerResult decodeGetFriendLeaderboardAroundPlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetAdPlacementsResult decodeGetAdPlacementsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientGetAccountInfoResult decodeGetAccountInfoResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeXboxEntitlementsResult decodeConsumeXboxEntitlementsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumePSNEntitlementsResult decodeConsumePSNEntitlementsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumePS5EntitlementsResult decodeConsumePS5EntitlementsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeMicrosoftStoreEntitlementsResponse decodeConsumeMicrosoftStoreEntitlementsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConsumeItemResult decodeConsumeItemResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientConfirmPurchaseResult decodeConfirmPurchaseResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientCancelTradeResponse decodeCancelTradeResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAttributeInstallResult decodeAttributeInstallResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAndroidDevicePushNotificationRegistrationResult decodeAndroidDevicePushNotificationRegistrationResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddUsernamePasswordResult decodeAddUsernamePasswordResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddOrUpdateContactEmailResult decodeAddOrUpdateContactEmailResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddGenericIDResult decodeAddGenericIDResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAddFriendResult decodeAddFriendResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FClientAcceptTradeResponse decodeAcceptTradeResponseResponse(UPlayFabJsonObject* Response);
    
};

