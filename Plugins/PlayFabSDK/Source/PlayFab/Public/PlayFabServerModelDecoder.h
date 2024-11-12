#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ServerAddPlayerTagResult.h"
#include "ServerAddSharedGroupMembersResult.h"
#include "ServerAuthenticateSessionTicketResult.h"
#include "ServerAwardSteamAchievementResult.h"
#include "ServerBanUsersResult.h"
#include "ServerConsumeItemResult.h"
#include "ServerCreateSharedGroupResult.h"
#include "ServerDeleteCharacterFromUserResult.h"
#include "ServerDeletePlayerResult.h"
#include "ServerDeletePushNotificationTemplateResult.h"
#include "ServerEmptyResponse.h"
#include "ServerEmptyResult.h"
#include "ServerEvaluateRandomResultTableResult.h"
#include "ServerExecuteCloudScriptResult.h"
#include "ServerGetAllSegmentsResult.h"
#include "ServerGetCatalogItemsResult.h"
#include "ServerGetCharacterDataResult.h"
#include "ServerGetCharacterInventoryResult.h"
#include "ServerGetCharacterLeaderboardResult.h"
#include "ServerGetCharacterStatisticsResult.h"
#include "ServerGetContentDownloadUrlResult.h"
#include "ServerGetFriendsListResult.h"
#include "ServerGetLeaderboardAroundCharacterResult.h"
#include "ServerGetLeaderboardAroundUserResult.h"
#include "ServerGetLeaderboardForUsersCharactersResult.h"
#include "ServerGetLeaderboardResult.h"
#include "ServerGetPlayFabIDsFromFacebookIDsResult.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult.h"
#include "ServerGetPlayFabIDsFromGenericIDsResult.h"
#include "ServerGetPlayFabIDsFromNintendoServiceAccountIdsResult.h"
#include "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h"
#include "ServerGetPlayFabIDsFromPSNAccountIDsResult.h"
#include "ServerGetPlayFabIDsFromPSNOnlineIDsResult.h"
#include "ServerGetPlayFabIDsFromSteamIDsResult.h"
#include "ServerGetPlayFabIDsFromTwitchIDsResult.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsResult.h"
#include "ServerGetPlayerCombinedInfoResult.h"
#include "ServerGetPlayerProfileResult.h"
#include "ServerGetPlayerSegmentsResult.h"
#include "ServerGetPlayerStatisticVersionsResult.h"
#include "ServerGetPlayerStatisticsResult.h"
#include "ServerGetPlayerTagsResult.h"
#include "ServerGetPlayersInSegmentResult.h"
#include "ServerGetPublisherDataResult.h"
#include "ServerGetRandomResultTablesResult.h"
#include "ServerGetServerCustomIDsFromPlayFabIDsResult.h"
#include "ServerGetSharedGroupDataResult.h"
#include "ServerGetStoreItemsResult.h"
#include "ServerGetTimeResult.h"
#include "ServerGetTitleDataResult.h"
#include "ServerGetTitleNewsResult.h"
#include "ServerGetUserAccountInfoResult.h"
#include "ServerGetUserBansResult.h"
#include "ServerGetUserDataResult.h"
#include "ServerGetUserInventoryResult.h"
#include "ServerGrantCharacterToUserResult.h"
#include "ServerGrantItemsToCharacterResult.h"
#include "ServerGrantItemsToUserResult.h"
#include "ServerGrantItemsToUsersResult.h"
#include "ServerLinkNintendoSwitchDeviceIdResult.h"
#include "ServerLinkPSNAccountResult.h"
#include "ServerLinkPSNIdResponse.h"
#include "ServerLinkServerCustomIdResult.h"
#include "ServerLinkSteamIdResult.h"
#include "ServerLinkXboxAccountResult.h"
#include "ServerListUsersCharactersResult.h"
#include "ServerModifyCharacterVirtualCurrencyResult.h"
#include "ServerModifyItemUsesResult.h"
#include "ServerModifyUserVirtualCurrencyResult.h"
#include "ServerMoveItemToCharacterFromCharacterResult.h"
#include "ServerMoveItemToCharacterFromUserResult.h"
#include "ServerMoveItemToUserFromCharacterResult.h"
#include "ServerRedeemCouponResult.h"
#include "ServerRemovePlayerTagResult.h"
#include "ServerRemoveSharedGroupMembersResult.h"
#include "ServerReportPlayerServerResult.h"
#include "ServerRevokeAllBansForUserResult.h"
#include "ServerRevokeBansResult.h"
#include "ServerRevokeInventoryItemsResult.h"
#include "ServerRevokeInventoryResult.h"
#include "ServerSavePushNotificationTemplateResult.h"
#include "ServerSendCustomAccountRecoveryEmailResult.h"
#include "ServerSendEmailFromTemplateResult.h"
#include "ServerSendPushNotificationResult.h"
#include "ServerServerLoginResult.h"
#include "ServerSetPlayerSecretResult.h"
#include "ServerSetPublisherDataResult.h"
#include "ServerSetTitleDataResult.h"
#include "ServerUnlinkNintendoSwitchDeviceIdResult.h"
#include "ServerUnlinkPSNAccountResult.h"
#include "ServerUnlinkServerCustomIdResult.h"
#include "ServerUnlinkSteamIdResult.h"
#include "ServerUnlinkXboxAccountResult.h"
#include "ServerUnlockContainerItemResult.h"
#include "ServerUpdateBansResult.h"
#include "ServerUpdateCharacterDataResult.h"
#include "ServerUpdateCharacterStatisticsResult.h"
#include "ServerUpdatePlayerStatisticsResult.h"
#include "ServerUpdateSharedGroupDataResult.h"
#include "ServerUpdateUserDataResult.h"
#include "ServerWriteEventResponse.h"
#include "PlayFabServerModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabServerModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FServerWriteEventResponse decodeWriteEventResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdatePlayerStatisticsResult decodeUpdatePlayerStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUpdateBansResult decodeUpdateBansResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlockContainerItemResult decodeUnlockContainerItemResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkXboxAccountResult decodeUnlinkXboxAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkSteamIdResult decodeUnlinkSteamIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkServerCustomIdResult decodeUnlinkServerCustomIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkPSNAccountResult decodeUnlinkPSNAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerUnlinkNintendoSwitchDeviceIdResult decodeUnlinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetTitleDataResult decodeSetTitleDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetPublisherDataResult decodeSetPublisherDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerServerLoginResult decodeServerLoginResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSendPushNotificationResult decodeSendPushNotificationResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSendEmailFromTemplateResult decodeSendEmailFromTemplateResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSendCustomAccountRecoveryEmailResult decodeSendCustomAccountRecoveryEmailResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerSavePushNotificationTemplateResult decodeSavePushNotificationTemplateResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeInventoryResult decodeRevokeInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeInventoryItemsResult decodeRevokeInventoryItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeBansResult decodeRevokeBansResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRevokeAllBansForUserResult decodeRevokeAllBansForUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerReportPlayerServerResult decodeReportPlayerServerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRemovePlayerTagResult decodeRemovePlayerTagResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerMoveItemToUserFromCharacterResult decodeMoveItemToUserFromCharacterResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerMoveItemToCharacterFromUserResult decodeMoveItemToCharacterFromUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerMoveItemToCharacterFromCharacterResult decodeMoveItemToCharacterFromCharacterResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerModifyItemUsesResult decodeModifyItemUsesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerModifyCharacterVirtualCurrencyResult decodeModifyCharacterVirtualCurrencyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkXboxAccountResult decodeLinkXboxAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkSteamIdResult decodeLinkSteamIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkServerCustomIdResult decodeLinkServerCustomIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkPSNIdResponse decodeLinkPSNIdResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkPSNAccountResult decodeLinkPSNAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerLinkNintendoSwitchDeviceIdResult decodeLinkNintendoSwitchDeviceIdResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantItemsToUserResult decodeGrantItemsToUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantItemsToCharacterResult decodeGrantItemsToCharacterResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserBansResult decodeGetUserBansResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetUserAccountInfoResult decodeGetUserAccountInfoResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetTimeResult decodeGetTimeResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetServerCustomIDsFromPlayFabIDsResult decodeGetServerCustomIDsFromPlayFabIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetRandomResultTablesResult decodeGetRandomResultTablesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromXboxLiveIDsResult decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromTwitchIDsResult decodeGetPlayFabIDsFromTwitchIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromPSNOnlineIDsResult decodeGetPlayFabIDsFromPSNOnlineIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromPSNAccountIDsResult decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult decodeGetPlayFabIDsFromNintendoServiceAccountIdsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromGenericIDsResult decodeGetPlayFabIDsFromGenericIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerStatisticsResult decodeGetPlayerStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayersInSegmentResult decodeGetPlayersInSegmentResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetPlayerCombinedInfoResult decodeGetPlayerCombinedInfoResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardAroundUserResult decodeGetLeaderboardAroundUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetFriendsListResult decodeGetFriendsListResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerGetAllSegmentsResult decodeGetAllSegmentsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerEvaluateRandomResultTableResult decodeEvaluateRandomResultTableResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeletePushNotificationTemplateResult decodeDeletePushNotificationTemplateResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeletePlayerResult decodeDeletePlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerDeleteCharacterFromUserResult decodeDeleteCharacterFromUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerConsumeItemResult decodeConsumeItemResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerBanUsersResult decodeBanUsersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAwardSteamAchievementResult decodeAwardSteamAchievementResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAuthenticateSessionTicketResult decodeAuthenticateSessionTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FServerAddPlayerTagResult decodeAddPlayerTagResultResponse(UPlayFabJsonObject* Response);
    
};

