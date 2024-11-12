#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnPlayFabServerRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "ServerAddCharacterVirtualCurrencyRequest.h"
#include "ServerAddFriendRequest.h"
#include "ServerAddGenericIDRequest.h"
#include "ServerAddPlayerTagRequest.h"
#include "ServerAddPlayerTagResult.h"
#include "ServerAddSharedGroupMembersRequest.h"
#include "ServerAddSharedGroupMembersResult.h"
#include "ServerAddUserVirtualCurrencyRequest.h"
#include "ServerAuthenticateSessionTicketRequest.h"
#include "ServerAuthenticateSessionTicketResult.h"
#include "ServerAwardSteamAchievementRequest.h"
#include "ServerAwardSteamAchievementResult.h"
#include "ServerBanUsersRequest.h"
#include "ServerBanUsersResult.h"
#include "ServerConsumeItemRequest.h"
#include "ServerConsumeItemResult.h"
#include "ServerCreateSharedGroupRequest.h"
#include "ServerCreateSharedGroupResult.h"
#include "ServerDeleteCharacterFromUserRequest.h"
#include "ServerDeleteCharacterFromUserResult.h"
#include "ServerDeletePlayerRequest.h"
#include "ServerDeletePlayerResult.h"
#include "ServerDeletePushNotificationTemplateRequest.h"
#include "ServerDeletePushNotificationTemplateResult.h"
#include "ServerDeleteSharedGroupRequest.h"
#include "ServerEmptyResponse.h"
#include "ServerEmptyResult.h"
#include "ServerEvaluateRandomResultTableRequest.h"
#include "ServerEvaluateRandomResultTableResult.h"
#include "ServerExecuteCloudScriptResult.h"
#include "ServerExecuteCloudScriptServerRequest.h"
#include "ServerGetAllSegmentsRequest.h"
#include "ServerGetAllSegmentsResult.h"
#include "ServerGetCatalogItemsRequest.h"
#include "ServerGetCatalogItemsResult.h"
#include "ServerGetCharacterDataRequest.h"
#include "ServerGetCharacterDataResult.h"
#include "ServerGetCharacterInventoryRequest.h"
#include "ServerGetCharacterInventoryResult.h"
#include "ServerGetCharacterLeaderboardRequest.h"
#include "ServerGetCharacterLeaderboardResult.h"
#include "ServerGetCharacterStatisticsRequest.h"
#include "ServerGetCharacterStatisticsResult.h"
#include "ServerGetContentDownloadUrlRequest.h"
#include "ServerGetContentDownloadUrlResult.h"
#include "ServerGetFriendLeaderboardRequest.h"
#include "ServerGetFriendsListRequest.h"
#include "ServerGetFriendsListResult.h"
#include "ServerGetLeaderboardAroundCharacterRequest.h"
#include "ServerGetLeaderboardAroundCharacterResult.h"
#include "ServerGetLeaderboardAroundUserRequest.h"
#include "ServerGetLeaderboardAroundUserResult.h"
#include "ServerGetLeaderboardForUsersCharactersRequest.h"
#include "ServerGetLeaderboardForUsersCharactersResult.h"
#include "ServerGetLeaderboardRequest.h"
#include "ServerGetLeaderboardResult.h"
#include "ServerGetPlayFabIDsFromFacebookIDsRequest.h"
#include "ServerGetPlayFabIDsFromFacebookIDsResult.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ServerGetPlayFabIDsFromGenericIDsRequest.h"
#include "ServerGetPlayFabIDsFromGenericIDsResult.h"
#include "ServerGetPlayFabIDsFromNintendoServiceAccountIdsRequest.h"
#include "ServerGetPlayFabIDsFromNintendoServiceAccountIdsResult.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsRequest.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ServerGetPlayFabIDsFromPSNOnlineIDsRequest.h"
#include "ServerGetPlayFabIDsFromPSNOnlineIDsResult.h"
#include "ServerGetPlayFabIDsFromSteamIDsRequest.h"
#include "ServerGetPlayFabIDsFromSteamIDsResult.h"
#include "ServerGetPlayFabIDsFromTwitchIDsRequest.h"
#include "ServerGetPlayFabIDsFromTwitchIDsResult.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsRequest.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ServerGetPlayerCombinedInfoRequest.h"
#include "ServerGetPlayerCombinedInfoResult.h"
#include "ServerGetPlayerProfileRequest.h"
#include "ServerGetPlayerProfileResult.h"
#include "ServerGetPlayerSegmentsResult.h"
#include "ServerGetPlayerStatisticVersionsRequest.h"
#include "ServerGetPlayerStatisticVersionsResult.h"
#include "ServerGetPlayerStatisticsRequest.h"
#include "ServerGetPlayerStatisticsResult.h"
#include "ServerGetPlayerTagsRequest.h"
#include "ServerGetPlayerTagsResult.h"
#include "ServerGetPlayersInSegmentRequest.h"
#include "ServerGetPlayersInSegmentResult.h"
#include "ServerGetPlayersSegmentsRequest.h"
#include "ServerGetPublisherDataRequest.h"
#include "ServerGetPublisherDataResult.h"
#include "ServerGetRandomResultTablesRequest.h"
#include "ServerGetRandomResultTablesResult.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsRequest.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsResult.h"
#include "ServerGetSharedGroupDataRequest.h"
#include "ServerGetSharedGroupDataResult.h"
#include "ServerGetStoreItemsResult.h"
#include "ServerGetStoreItemsServerRequest.h"
#include "ServerGetTimeRequest.h"
#include "ServerGetTimeResult.h"
#include "ServerGetTitleDataRequest.h"
#include "ServerGetTitleDataResult.h"
#include "ServerGetTitleNewsRequest.h"
#include "ServerGetTitleNewsResult.h"
#include "ServerGetUserAccountInfoRequest.h"
#include "ServerGetUserAccountInfoResult.h"
#include "ServerGetUserBansRequest.h"
#include "ServerGetUserBansResult.h"
#include "ServerGetUserDataRequest.h"
#include "ServerGetUserDataResult.h"
#include "ServerGetUserInventoryRequest.h"
#include "ServerGetUserInventoryResult.h"
#include "ServerGrantCharacterToUserRequest.h"
#include "ServerGrantCharacterToUserResult.h"
#include "ServerGrantItemsToCharacterRequest.h"
#include "ServerGrantItemsToCharacterResult.h"
#include "ServerGrantItemsToUserRequest.h"
#include "ServerGrantItemsToUserResult.h"
#include "ServerGrantItemsToUsersRequest.h"
#include "ServerGrantItemsToUsersResult.h"
#include "ServerLinkNintendoServiceAccountRequest.h"
#include "ServerLinkNintendoServiceAccountSubjectRequest.h"
#include "ServerLinkNintendoSwitchDeviceIdRequest.h"
#include "ServerLinkNintendoSwitchDeviceIdResult.h"
#include "ServerLinkPSNAccountRequest.h"
#include "ServerLinkPSNAccountResult.h"
#include "ServerLinkPSNIdRequest.h"
#include "ServerLinkPSNIdResponse.h"
#include "ServerLinkServerCustomIdRequest.h"
#include "ServerLinkServerCustomIdResult.h"
#include "ServerLinkSteamIdRequest.h"
#include "ServerLinkSteamIdResult.h"
#include "ServerLinkXboxAccountRequest.h"
#include "ServerLinkXboxAccountResult.h"
#include "ServerListUsersCharactersRequest.h"
#include "ServerListUsersCharactersResult.h"
#include "ServerLoginWithPSNRequest.h"
#include "ServerLoginWithServerCustomIdRequest.h"
#include "ServerLoginWithSteamIdRequest.h"
#include "ServerLoginWithXboxIdRequest.h"
#include "ServerLoginWithXboxRequest.h"
#include "ServerModifyCharacterVirtualCurrencyResult.h"
#include "ServerModifyItemUsesRequest.h"
#include "ServerModifyItemUsesResult.h"
#include "ServerModifyUserVirtualCurrencyResult.h"
#include "ServerMoveItemToCharacterFromCharacterRequest.h"
#include "ServerMoveItemToCharacterFromCharacterResult.h"
#include "ServerMoveItemToCharacterFromUserRequest.h"
#include "ServerMoveItemToCharacterFromUserResult.h"
#include "ServerMoveItemToUserFromCharacterRequest.h"
#include "ServerMoveItemToUserFromCharacterResult.h"
#include "ServerRedeemCouponRequest.h"
#include "ServerRedeemCouponResult.h"
#include "ServerRemoveFriendRequest.h"
#include "ServerRemoveGenericIDRequest.h"
#include "ServerRemovePlayerTagRequest.h"
#include "ServerRemovePlayerTagResult.h"
#include "ServerRemoveSharedGroupMembersRequest.h"
#include "ServerRemoveSharedGroupMembersResult.h"
#include "ServerReportPlayerServerRequest.h"
#include "ServerReportPlayerServerResult.h"
#include "ServerRevokeAllBansForUserRequest.h"
#include "ServerRevokeAllBansForUserResult.h"
#include "ServerRevokeBansRequest.h"
#include "ServerRevokeBansResult.h"
#include "ServerRevokeInventoryItemRequest.h"
#include "ServerRevokeInventoryItemsRequest.h"
#include "ServerRevokeInventoryItemsResult.h"
#include "ServerRevokeInventoryResult.h"
#include "ServerSavePushNotificationTemplateRequest.h"
#include "ServerSavePushNotificationTemplateResult.h"
#include "ServerSendCustomAccountRecoveryEmailRequest.h"
#include "ServerSendCustomAccountRecoveryEmailResult.h"
#include "ServerSendEmailFromTemplateRequest.h"
#include "ServerSendEmailFromTemplateResult.h"
#include "ServerSendPushNotificationFromTemplateRequest.h"
#include "ServerSendPushNotificationRequest.h"
#include "ServerSendPushNotificationResult.h"
#include "ServerServerLoginResult.h"
#include "ServerSetFriendTagsRequest.h"
#include "ServerSetPlayerSecretRequest.h"
#include "ServerSetPlayerSecretResult.h"
#include "ServerSetPublisherDataRequest.h"
#include "ServerSetPublisherDataResult.h"
#include "ServerSetTitleDataRequest.h"
#include "ServerSetTitleDataResult.h"
#include "ServerSubtractCharacterVirtualCurrencyRequest.h"
#include "ServerSubtractUserVirtualCurrencyRequest.h"
#include "ServerUnlinkNintendoServiceAccountRequest.h"
#include "ServerUnlinkNintendoSwitchDeviceIdRequest.h"
#include "ServerUnlinkNintendoSwitchDeviceIdResult.h"
#include "ServerUnlinkPSNAccountRequest.h"
#include "ServerUnlinkPSNAccountResult.h"
#include "ServerUnlinkServerCustomIdRequest.h"
#include "ServerUnlinkServerCustomIdResult.h"
#include "ServerUnlinkSteamIdRequest.h"
#include "ServerUnlinkSteamIdResult.h"
#include "ServerUnlinkXboxAccountRequest.h"
#include "ServerUnlinkXboxAccountResult.h"
#include "ServerUnlockContainerInstanceRequest.h"
#include "ServerUnlockContainerItemRequest.h"
#include "ServerUnlockContainerItemResult.h"
#include "ServerUpdateAvatarUrlRequest.h"
#include "ServerUpdateBansRequest.h"
#include "ServerUpdateBansResult.h"
#include "ServerUpdateCharacterDataRequest.h"
#include "ServerUpdateCharacterDataResult.h"
#include "ServerUpdateCharacterStatisticsRequest.h"
#include "ServerUpdateCharacterStatisticsResult.h"
#include "ServerUpdatePlayerStatisticsRequest.h"
#include "ServerUpdatePlayerStatisticsResult.h"
#include "ServerUpdateSharedGroupDataRequest.h"
#include "ServerUpdateSharedGroupDataResult.h"
#include "ServerUpdateUserDataRequest.h"
#include "ServerUpdateUserDataResult.h"
#include "ServerUpdateUserInternalDataRequest.h"
#include "ServerUpdateUserInventoryItemDataRequest.h"
#include "ServerWriteEventResponse.h"
#include "ServerWriteServerCharacterEventRequest.h"
#include "ServerWriteServerPlayerEventRequest.h"
#include "ServerWriteTitleEventRequest.h"
#include "PlayFabServerAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabServerAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteTitleEvent, FServerWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWritePlayerEvent, FServerWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteCharacterEvent, FServerWriteEventResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserReadOnlyData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherReadOnlyData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherInternalData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserPublisherData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserInventoryItemCustomData, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserInternalData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateUserData, FServerUpdateUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateSharedGroupData, FServerUpdateSharedGroupDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdatePlayerStatistics, FServerUpdatePlayerStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterStatistics, FServerUpdateCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterReadOnlyData, FServerUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterInternalData, FServerUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateCharacterData, FServerUpdateCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateBans, FServerUpdateBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateAvatarUrl, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlockContainerItem, FServerUnlockContainerItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlockContainerInstance, FServerUnlockContainerItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkXboxAccount, FServerUnlinkXboxAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkSteamId, FServerUnlinkSteamIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkServerCustomId, FServerUnlinkServerCustomIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkPSNAccount, FServerUnlinkPSNAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkNintendoSwitchDeviceId, FServerUnlinkNintendoSwitchDeviceIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUnlinkNintendoServiceAccount, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSubtractCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleInternalData, FServerSetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTitleData, FServerSetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPublisherData, FServerSetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetPlayerSecret, FServerSetPlayerSecretResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetFriendTags, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendPushNotificationFromTemplate, FServerSendPushNotificationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendPushNotification, FServerSendPushNotificationResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendEmailFromTemplate, FServerSendEmailFromTemplateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSendCustomAccountRecoveryEmail, FServerSendCustomAccountRecoveryEmailResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSavePushNotificationTemplate, FServerSavePushNotificationTemplateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItems, FServerRevokeInventoryItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeInventoryItem, FServerRevokeInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeBans, FServerRevokeBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRevokeAllBansForUser, FServerRevokeAllBansForUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessReportPlayer, FServerReportPlayerServerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveSharedGroupMembers, FServerRemoveSharedGroupMembersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemovePlayerTag, FServerRemovePlayerTagResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveGenericID, FServerEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRemoveFriend, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessRedeemCoupon, FServerRedeemCouponResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMoveItemToUserFromCharacter, FServerMoveItemToUserFromCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMoveItemToCharacterFromUser, FServerMoveItemToCharacterFromUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessMoveItemToCharacterFromCharacter, FServerMoveItemToCharacterFromCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessModifyItemUses, FServerModifyItemUsesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithXboxId, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithXbox, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithSteamId, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithServerCustomId, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLoginWithPSN, FServerServerLoginResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkXboxAccount, FServerLinkXboxAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkSteamId, FServerLinkSteamIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkServerCustomId, FServerLinkServerCustomIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkPSNId, FServerLinkPSNIdResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkPSNAccount, FServerLinkPSNAccountResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkNintendoSwitchDeviceId, FServerLinkNintendoSwitchDeviceIdResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkNintendoServiceAccountSubject, FServerEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessLinkNintendoServiceAccount, FServerEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToUsers, FServerGrantItemsToUsersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToUser, FServerGrantItemsToUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantItemsToCharacter, FServerGrantItemsToCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGrantCharacterToUser, FServerGrantCharacterToUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserReadOnlyData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherReadOnlyData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherInternalData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserPublisherData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInventory, FServerGetUserInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserInternalData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserData, FServerGetUserDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserBans, FServerGetUserBansResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetUserAccountInfo, FServerGetUserAccountInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleNews, FServerGetTitleNewsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleInternalData, FServerGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTitleData, FServerGetTitleDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTime, FServerGetTimeResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStoreItems, FServerGetStoreItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetSharedGroupData, FServerGetSharedGroupDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs, FServerGetServerCustomIDsFromPlayFabIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetRandomResultTables, FServerGetRandomResultTablesResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPublisherData, FServerGetPublisherDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs, FServerGetPlayFabIDsFromXboxLiveIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromTwitchIDs, FServerGetPlayFabIDsFromTwitchIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromSteamIDs, FServerGetPlayFabIDsFromSteamIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromPSNOnlineIDs, FServerGetPlayFabIDsFromPSNOnlineIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs, FServerGetPlayFabIDsFromPSNAccountIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds, FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds, FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromGenericIDs, FServerGetPlayFabIDsFromGenericIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds, FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs, FServerGetPlayFabIDsFromFacebookIDsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerTags, FServerGetPlayerTagsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatisticVersions, FServerGetPlayerStatisticVersionsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerStatistics, FServerGetPlayerStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayersInSegment, FServerGetPlayersInSegmentResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerSegments, FServerGetPlayerSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerProfile, FServerGetPlayerProfileResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetPlayerCombinedInfo, FServerGetPlayerCombinedInfoResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardForUserCharacters, FServerGetLeaderboardForUsersCharactersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundUser, FServerGetLeaderboardAroundUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundCharacter, FServerGetLeaderboardAroundCharacterResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboard, FServerGetLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendsList, FServerGetFriendsListResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetFriendLeaderboard, FServerGetLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetContentDownloadUrl, FServerGetContentDownloadUrlResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterStatistics, FServerGetCharacterStatisticsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterReadOnlyData, FServerGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterLeaderboard, FServerGetCharacterLeaderboardResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterInventory, FServerGetCharacterInventoryResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterInternalData, FServerGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCharacterData, FServerGetCharacterDataResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetCatalogItems, FServerGetCatalogItemsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAllUsersCharacters, FServerListUsersCharactersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetAllSegments, FServerGetAllSegmentsResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessExecuteCloudScript, FServerExecuteCloudScriptResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessEvaluateRandomResultTable, FServerEvaluateRandomResultTableResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteSharedGroup, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeletePushNotificationTemplate, FServerDeletePushNotificationTemplateResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeletePlayer, FServerDeletePlayerResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteCharacterFromUser, FServerDeleteCharacterFromUserResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateSharedGroup, FServerCreateSharedGroupResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessConsumeItem, FServerConsumeItemResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessBanUsers, FServerBanUsersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAwardSteamAchievement, FServerAwardSteamAchievementResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAuthenticateSessionTicket, FServerAuthenticateSessionTicketResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddSharedGroupMembers, FServerAddSharedGroupMembersResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddPlayerTag, FServerAddPlayerTagResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddGenericID, FServerEmptyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddFriend, FServerEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessAddCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabServerRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabServerAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* WriteTitleEvent(FServerWriteTitleEventRequest Request, UPlayFabServerAPI::FDelegateOnSuccessWriteTitleEvent onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* WritePlayerEvent(FServerWriteServerPlayerEventRequest Request, UPlayFabServerAPI::FDelegateOnSuccessWritePlayerEvent onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* WriteCharacterEvent(FServerWriteServerCharacterEventRequest Request, UPlayFabServerAPI::FDelegateOnSuccessWriteCharacterEvent onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserReadOnlyData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserPublisherReadOnlyData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserPublisherReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserPublisherInternalData(FServerUpdateUserInternalDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserPublisherInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserPublisherData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserInventoryItemCustomData(FServerUpdateUserInventoryItemDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserInventoryItemCustomData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserInternalData(FServerUpdateUserInternalDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateUserData(FServerUpdateUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateUserData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateSharedGroupData(FServerUpdateSharedGroupDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateSharedGroupData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdatePlayerStatistics(FServerUpdatePlayerStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdatePlayerStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterStatistics(FServerUpdateCharacterStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterReadOnlyData(FServerUpdateCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterInternalData(FServerUpdateCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateCharacterData(FServerUpdateCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateCharacterData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateBans(FServerUpdateBansRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateBans onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UpdateAvatarUrl(FServerUpdateAvatarUrlRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUpdateAvatarUrl onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlockContainerItem(FServerUnlockContainerItemRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlockContainerItem onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlockContainerInstance(FServerUnlockContainerInstanceRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlockContainerInstance onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkXboxAccount(FServerUnlinkXboxAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkXboxAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkSteamId(FServerUnlinkSteamIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkSteamId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkServerCustomId(FServerUnlinkServerCustomIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkServerCustomId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkPSNAccount(FServerUnlinkPSNAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkPSNAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkNintendoSwitchDeviceId(FServerUnlinkNintendoSwitchDeviceIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkNintendoSwitchDeviceId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* UnlinkNintendoServiceAccount(FServerUnlinkNintendoServiceAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessUnlinkNintendoServiceAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SubtractUserVirtualCurrency(FServerSubtractUserVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSubtractUserVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SubtractCharacterVirtualCurrency(FServerSubtractCharacterVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSubtractCharacterVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetTitleInternalData(FServerSetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetTitleInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetTitleData(FServerSetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetTitleData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetPublisherData(FServerSetPublisherDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetPlayerSecret(FServerSetPlayerSecretRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetPlayerSecret onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SetFriendTags(FServerSetFriendTagsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSetFriendTags onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendPushNotificationFromTemplate(FServerSendPushNotificationFromTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendPushNotificationFromTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendPushNotification(FServerSendPushNotificationRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendPushNotification onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendEmailFromTemplate(FServerSendEmailFromTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendEmailFromTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SendCustomAccountRecoveryEmail(FServerSendCustomAccountRecoveryEmailRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSendCustomAccountRecoveryEmail onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* SavePushNotificationTemplate(FServerSavePushNotificationTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessSavePushNotificationTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeInventoryItems(FServerRevokeInventoryItemsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeInventoryItems onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeInventoryItem(FServerRevokeInventoryItemRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeInventoryItem onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeBans(FServerRevokeBansRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeBans onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RevokeAllBansForUser(FServerRevokeAllBansForUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRevokeAllBansForUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ReportPlayer(FServerReportPlayerServerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessReportPlayer onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemoveSharedGroupMembers(FServerRemoveSharedGroupMembersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemoveSharedGroupMembers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemovePlayerTag(FServerRemovePlayerTagRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemovePlayerTag onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemoveGenericID(FServerRemoveGenericIDRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemoveGenericID onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RemoveFriend(FServerRemoveFriendRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRemoveFriend onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* RedeemCoupon(FServerRedeemCouponRequest Request, UPlayFabServerAPI::FDelegateOnSuccessRedeemCoupon onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* MoveItemToUserFromCharacter(FServerMoveItemToUserFromCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessMoveItemToUserFromCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* MoveItemToCharacterFromUser(FServerMoveItemToCharacterFromUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessMoveItemToCharacterFromUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* MoveItemToCharacterFromCharacter(FServerMoveItemToCharacterFromCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessMoveItemToCharacterFromCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ModifyItemUses(FServerModifyItemUsesRequest Request, UPlayFabServerAPI::FDelegateOnSuccessModifyItemUses onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithXboxId(FServerLoginWithXboxIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithXboxId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithXbox(FServerLoginWithXboxRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithXbox onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithSteamId(FServerLoginWithSteamIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithSteamId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithServerCustomId(FServerLoginWithServerCustomIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithServerCustomId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LoginWithPSN(FServerLoginWithPSNRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLoginWithPSN onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkXboxAccount(FServerLinkXboxAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkXboxAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkSteamId(FServerLinkSteamIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkSteamId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkServerCustomId(FServerLinkServerCustomIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkServerCustomId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkPSNId(FServerLinkPSNIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkPSNId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkPSNAccount(FServerLinkPSNAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkPSNAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkNintendoSwitchDeviceId(FServerLinkNintendoSwitchDeviceIdRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkNintendoSwitchDeviceId onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkNintendoServiceAccountSubject(FServerLinkNintendoServiceAccountSubjectRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkNintendoServiceAccountSubject onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* LinkNintendoServiceAccount(FServerLinkNintendoServiceAccountRequest Request, UPlayFabServerAPI::FDelegateOnSuccessLinkNintendoServiceAccount onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteTitleEvent(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWritePlayerEvent(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteCharacterEvent(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserReadOnlyData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherReadOnlyData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserPublisherData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserInventoryItemCustomData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateUserData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateSharedGroupData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdatePlayerStatistics(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterStatistics(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterReadOnlyData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateCharacterData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateBans(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateAvatarUrl(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlockContainerItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlockContainerInstance(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkXboxAccount(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkSteamId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkServerCustomId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkPSNAccount(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkNintendoSwitchDeviceId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperUnlinkNintendoServiceAccount(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractUserVirtualCurrency(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSubtractCharacterVirtualCurrency(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTitleData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPublisherData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetPlayerSecret(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetFriendTags(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendPushNotificationFromTemplate(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendPushNotification(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendEmailFromTemplate(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSendCustomAccountRecoveryEmail(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSavePushNotificationTemplate(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeInventoryItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeInventoryItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeBans(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRevokeAllBansForUser(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperReportPlayer(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveSharedGroupMembers(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemovePlayerTag(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveGenericID(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRemoveFriend(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperRedeemCoupon(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMoveItemToUserFromCharacter(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMoveItemToCharacterFromUser(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperMoveItemToCharacterFromCharacter(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperModifyItemUses(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithXboxId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithXbox(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithSteamId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithServerCustomId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLoginWithPSN(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkXboxAccount(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkSteamId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkServerCustomId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkPSNId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkPSNAccount(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkNintendoSwitchDeviceId(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkNintendoServiceAccountSubject(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperLinkNintendoServiceAccount(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToUsers(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToUser(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantItemsToCharacter(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGrantCharacterToUser(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserReadOnlyData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherReadOnlyData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserPublisherData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInventory(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserBans(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetUserAccountInfo(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleNews(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTitleData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTime(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStoreItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetSharedGroupData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetServerCustomIDsFromPlayFabIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetRandomResultTables(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPublisherData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromXboxLiveIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromTwitchIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromSteamIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromPSNOnlineIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromPSNAccountIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromNintendoServiceAccountIds(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromGenericIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromFacebookInstantGamesIds(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayFabIDsFromFacebookIDs(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerTags(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatisticVersions(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerStatistics(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayersInSegment(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerSegments(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerProfile(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetPlayerCombinedInfo(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardForUserCharacters(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundUser(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundCharacter(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboard(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendsList(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetFriendLeaderboard(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetContentDownloadUrl(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterStatistics(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterReadOnlyData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterLeaderboard(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterInventory(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterInternalData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCharacterData(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetCatalogItems(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAllUsersCharacters(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetAllSegments(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperExecuteCloudScript(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperEvaluateRandomResultTable(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteSharedGroup(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeletePushNotificationTemplate(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeletePlayer(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteCharacterFromUser(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateSharedGroup(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperConsumeItem(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperBanUsers(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAwardSteamAchievement(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAuthenticateSessionTicket(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddUserVirtualCurrency(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddSharedGroupMembers(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddPlayerTag(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddGenericID(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddFriend(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperAddCharacterVirtualCurrency(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantItemsToUsers(FServerGrantItemsToUsersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantItemsToUsers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantItemsToUser(FServerGrantItemsToUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantItemsToUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantItemsToCharacter(FServerGrantItemsToCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantItemsToCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GrantCharacterToUser(FServerGrantCharacterToUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGrantCharacterToUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserReadOnlyData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserPublisherReadOnlyData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserPublisherReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserPublisherInternalData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserPublisherInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserPublisherData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserInventory(FServerGetUserInventoryRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserInventory onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserInternalData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserData(FServerGetUserDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserBans(FServerGetUserBansRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserBans onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetUserAccountInfo(FServerGetUserAccountInfoRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetUserAccountInfo onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTitleNews(FServerGetTitleNewsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTitleNews onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTitleInternalData(FServerGetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTitleInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTitleData(FServerGetTitleDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTitleData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetTime(FServerGetTimeRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetTime onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetStoreItems(FServerGetStoreItemsServerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetStoreItems onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetSharedGroupData(FServerGetSharedGroupDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetSharedGroupData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetServerCustomIDsFromPlayFabIDs(FServerGetServerCustomIDsFromPlayFabIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetRandomResultTables(FServerGetRandomResultTablesRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetRandomResultTables onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPublisherData(FServerGetPublisherDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPublisherData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromXboxLiveIDs(FServerGetPlayFabIDsFromXboxLiveIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromTwitchIDs(FServerGetPlayFabIDsFromTwitchIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromTwitchIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromSteamIDs(FServerGetPlayFabIDsFromSteamIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromSteamIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromPSNOnlineIDs(FServerGetPlayFabIDsFromPSNOnlineIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromPSNOnlineIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromPSNAccountIDs(FServerGetPlayFabIDsFromPSNAccountIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromNintendoSwitchDeviceIds(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromNintendoServiceAccountIds(FServerGetPlayFabIDsFromNintendoServiceAccountIdsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromGenericIDs(FServerGetPlayFabIDsFromGenericIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromGenericIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromFacebookInstantGamesIds(FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayFabIDsFromFacebookIDs(FServerGetPlayFabIDsFromFacebookIDsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerTags(FServerGetPlayerTagsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerTags onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerStatisticVersions(FServerGetPlayerStatisticVersionsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerStatisticVersions onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerStatistics(FServerGetPlayerStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayersInSegment(FServerGetPlayersInSegmentRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayersInSegment onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerSegments(FServerGetPlayersSegmentsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerSegments onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerProfile(FServerGetPlayerProfileRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerProfile onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetPlayerCombinedInfo(FServerGetPlayerCombinedInfoRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetPlayerCombinedInfo onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboardForUserCharacters(FServerGetLeaderboardForUsersCharactersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboardForUserCharacters onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboardAroundUser(FServerGetLeaderboardAroundUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboardAroundUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboardAroundCharacter(FServerGetLeaderboardAroundCharacterRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboardAroundCharacter onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetLeaderboard(FServerGetLeaderboardRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetLeaderboard onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetFriendsList(FServerGetFriendsListRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetFriendsList onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetFriendLeaderboard(FServerGetFriendLeaderboardRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetFriendLeaderboard onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetContentDownloadUrl(FServerGetContentDownloadUrlRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetContentDownloadUrl onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterStatistics(FServerGetCharacterStatisticsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterStatistics onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterReadOnlyData(FServerGetCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterReadOnlyData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterLeaderboard(FServerGetCharacterLeaderboardRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterLeaderboard onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterInventory(FServerGetCharacterInventoryRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterInventory onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterInternalData(FServerGetCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterInternalData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCharacterData(FServerGetCharacterDataRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCharacterData onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetCatalogItems(FServerGetCatalogItemsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetCatalogItems onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetAllUsersCharacters(FServerListUsersCharactersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetAllUsersCharacters onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* GetAllSegments(FServerGetAllSegmentsRequest Request, UPlayFabServerAPI::FDelegateOnSuccessGetAllSegments onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ExecuteCloudScript(FServerExecuteCloudScriptServerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessExecuteCloudScript onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* EvaluateRandomResultTable(FServerEvaluateRandomResultTableRequest Request, UPlayFabServerAPI::FDelegateOnSuccessEvaluateRandomResultTable onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeleteSharedGroup(FServerDeleteSharedGroupRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeleteSharedGroup onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeletePushNotificationTemplate(FServerDeletePushNotificationTemplateRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeletePushNotificationTemplate onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeletePlayer(FServerDeletePlayerRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeletePlayer onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* DeleteCharacterFromUser(FServerDeleteCharacterFromUserRequest Request, UPlayFabServerAPI::FDelegateOnSuccessDeleteCharacterFromUser onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* CreateSharedGroup(FServerCreateSharedGroupRequest Request, UPlayFabServerAPI::FDelegateOnSuccessCreateSharedGroup onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* ConsumeItem(FServerConsumeItemRequest Request, UPlayFabServerAPI::FDelegateOnSuccessConsumeItem onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* BanUsers(FServerBanUsersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessBanUsers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AwardSteamAchievement(FServerAwardSteamAchievementRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAwardSteamAchievement onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AuthenticateSessionTicket(FServerAuthenticateSessionTicketRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAuthenticateSessionTicket onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddUserVirtualCurrency(FServerAddUserVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddUserVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddSharedGroupMembers(FServerAddSharedGroupMembersRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddSharedGroupMembers onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddPlayerTag(FServerAddPlayerTagRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddPlayerTag onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddGenericID(FServerAddGenericIDRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddGenericID onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddFriend(FServerAddFriendRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddFriend onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabServerAPI* AddCharacterVirtualCurrency(FServerAddCharacterVirtualCurrencyRequest Request, UPlayFabServerAPI::FDelegateOnSuccessAddCharacterVirtualCurrency onSuccess, UPlayFabServerAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

