#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AdminAddLocalizedNewsResult.h"
#include "AdminAddNewsResult.h"
#include "AdminAddPlayerTagResult.h"
#include "AdminBanUsersResult.h"
#include "AdminBlankResult.h"
#include "AdminCheckLimitedEditionItemAvailabilityResult.h"
#include "AdminCreatePlayerSharedSecretResult.h"
#include "AdminCreatePlayerStatisticDefinitionResult.h"
#include "AdminCreateSegmentResponse.h"
#include "AdminCreateTaskResult.h"
#include "AdminDeleteMasterPlayerAccountResult.h"
#include "AdminDeleteMasterPlayerEventDataResult.h"
#include "AdminDeleteMembershipSubscriptionResult.h"
#include "AdminDeletePlayerResult.h"
#include "AdminDeletePlayerSharedSecretResult.h"
#include "AdminDeleteSegmentsResponse.h"
#include "AdminDeleteStoreResult.h"
#include "AdminDeleteTitleDataOverrideResult.h"
#include "AdminDeleteTitleResult.h"
#include "AdminEmptyResponse.h"
#include "AdminExportMasterPlayerDataResult.h"
#include "AdminExportPlayersInSegmentResult.h"
#include "AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h"
#include "AdminGetAllSegmentsResult.h"
#include "AdminGetCatalogItemsResult.h"
#include "AdminGetCloudScriptRevisionResult.h"
#include "AdminGetCloudScriptTaskInstanceResult.h"
#include "AdminGetCloudScriptVersionsResult.h"
#include "AdminGetContentListResult.h"
#include "AdminGetContentUploadUrlResult.h"
#include "AdminGetDataReportResult.h"
#include "AdminGetPlayedTitleListResult.h"
#include "AdminGetPlayerIdFromAuthTokenResult.h"
#include "AdminGetPlayerProfileResult.h"
#include "AdminGetPlayerSegmentsResult.h"
#include "AdminGetPlayerSharedSecretsResult.h"
#include "AdminGetPlayerStatisticDefinitionsResult.h"
#include "AdminGetPlayerStatisticVersionsResult.h"
#include "AdminGetPlayerTagsResult.h"
#include "AdminGetPlayersInSegmentExportResponse.h"
#include "AdminGetPlayersInSegmentResult.h"
#include "AdminGetPolicyResponse.h"
#include "AdminGetPublisherDataResult.h"
#include "AdminGetRandomResultTablesResult.h"
#include "AdminGetSegmentsResponse.h"
#include "AdminGetStoreItemsResult.h"
#include "AdminGetTaskInstancesResult.h"
#include "AdminGetTasksResult.h"
#include "AdminGetTitleDataResult.h"
#include "AdminGetUserBansResult.h"
#include "AdminGetUserDataResult.h"
#include "AdminGetUserInventoryResult.h"
#include "AdminGrantItemsToUsersResult.h"
#include "AdminIncrementLimitedEditionItemAvailabilityResult.h"
#include "AdminIncrementPlayerStatisticVersionResult.h"
#include "AdminListOpenIdConnectionResponse.h"
#include "AdminListVirtualCurrencyTypesResult.h"
#include "AdminLookupUserAccountInfoResult.h"
#include "AdminModifyUserVirtualCurrencyResult.h"
#include "AdminRefundPurchaseResponse.h"
#include "AdminRemovePlayerTagResult.h"
#include "AdminResetCharacterStatisticsResult.h"
#include "AdminResetPasswordResult.h"
#include "AdminResetUserStatisticsResult.h"
#include "AdminResolvePurchaseDisputeResponse.h"
#include "AdminRevokeAllBansForUserResult.h"
#include "AdminRevokeBansResult.h"
#include "AdminRevokeInventoryItemsResult.h"
#include "AdminRevokeInventoryResult.h"
#include "AdminRunTaskResult.h"
#include "AdminSendAccountRecoveryEmailResult.h"
#include "AdminSetMembershipOverrideResult.h"
#include "AdminSetPlayerSecretResult.h"
#include "AdminSetPublishedRevisionResult.h"
#include "AdminSetPublisherDataResult.h"
#include "AdminSetTitleDataAndOverridesResult.h"
#include "AdminSetTitleDataResult.h"
#include "AdminSetupPushNotificationResult.h"
#include "AdminUpdateBansResult.h"
#include "AdminUpdateCatalogItemsResult.h"
#include "AdminUpdateCloudScriptResult.h"
#include "AdminUpdatePlayerSharedSecretResult.h"
#include "AdminUpdatePlayerStatisticDefinitionResult.h"
#include "AdminUpdatePolicyResponse.h"
#include "AdminUpdateRandomResultTablesResult.h"
#include "AdminUpdateSegmentResponse.h"
#include "AdminUpdateStoreItemsResult.h"
#include "AdminUpdateUserDataResult.h"
#include "AdminUpdateUserTitleDisplayNameResult.h"
#include "PlayFabAdminModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabAdminModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FAdminUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateStoreItemsResult decodeUpdateStoreItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateSegmentResponse decodeUpdateSegmentResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateRandomResultTablesResult decodeUpdateRandomResultTablesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdatePolicyResponse decodeUpdatePolicyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdatePlayerStatisticDefinitionResult decodeUpdatePlayerStatisticDefinitionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdatePlayerSharedSecretResult decodeUpdatePlayerSharedSecretResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateCloudScriptResult decodeUpdateCloudScriptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateCatalogItemsResult decodeUpdateCatalogItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminUpdateBansResult decodeUpdateBansResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetupPushNotificationResult decodeSetupPushNotificationResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetTitleDataResult decodeSetTitleDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetTitleDataAndOverridesResult decodeSetTitleDataAndOverridesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetPublisherDataResult decodeSetPublisherDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetPublishedRevisionResult decodeSetPublishedRevisionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetPlayerSecretResult decodeSetPlayerSecretResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSetMembershipOverrideResult decodeSetMembershipOverrideResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRunTaskResult decodeRunTaskResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeInventoryResult decodeRevokeInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeInventoryItemsResult decodeRevokeInventoryItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeBansResult decodeRevokeBansResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRevokeAllBansForUserResult decodeRevokeAllBansForUserResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResolvePurchaseDisputeResponse decodeResolvePurchaseDisputeResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResetUserStatisticsResult decodeResetUserStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResetPasswordResult decodeResetPasswordResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminResetCharacterStatisticsResult decodeResetCharacterStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRemovePlayerTagResult decodeRemovePlayerTagResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminRefundPurchaseResponse decodeRefundPurchaseResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminLookupUserAccountInfoResult decodeLookupUserAccountInfoResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminListVirtualCurrencyTypesResult decodeListVirtualCurrencyTypesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminListOpenIdConnectionResponse decodeListOpenIdConnectionResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminIncrementPlayerStatisticVersionResult decodeIncrementPlayerStatisticVersionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminIncrementLimitedEditionItemAvailabilityResult decodeIncrementLimitedEditionItemAvailabilityResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetUserBansResult decodeGetUserBansResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetTasksResult decodeGetTasksResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetTaskInstancesResult decodeGetTaskInstancesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetSegmentsResponse decodeGetSegmentsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetRandomResultTablesResult decodeGetRandomResultTablesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPolicyResponse decodeGetPolicyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerTagsResult decodeGetPlayerTagsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerStatisticVersionsResult decodeGetPlayerStatisticVersionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerStatisticDefinitionsResult decodeGetPlayerStatisticDefinitionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayersInSegmentResult decodeGetPlayersInSegmentResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayersInSegmentExportResponse decodeGetPlayersInSegmentExportResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerSharedSecretsResult decodeGetPlayerSharedSecretsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerSegmentsResult decodeGetPlayerSegmentsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerProfileResult decodeGetPlayerProfileResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayerIdFromAuthTokenResult decodeGetPlayerIdFromAuthTokenResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetPlayedTitleListResult decodeGetPlayedTitleListResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetDataReportResult decodeGetDataReportResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetContentUploadUrlResult decodeGetContentUploadUrlResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetContentListResult decodeGetContentListResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCloudScriptVersionsResult decodeGetCloudScriptVersionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCloudScriptTaskInstanceResult decodeGetCloudScriptTaskInstanceResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCloudScriptRevisionResult decodeGetCloudScriptRevisionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetAllSegmentsResult decodeGetAllSegmentsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminGetActionsOnPlayersInSegmentTaskInstanceResult decodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminExportPlayersInSegmentResult decodeExportPlayersInSegmentResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminExportMasterPlayerDataResult decodeExportMasterPlayerDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteTitleResult decodeDeleteTitleResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteTitleDataOverrideResult decodeDeleteTitleDataOverrideResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteStoreResult decodeDeleteStoreResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteSegmentsResponse decodeDeleteSegmentsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeletePlayerSharedSecretResult decodeDeletePlayerSharedSecretResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeletePlayerResult decodeDeletePlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteMembershipSubscriptionResult decodeDeleteMembershipSubscriptionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteMasterPlayerEventDataResult decodeDeleteMasterPlayerEventDataResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminDeleteMasterPlayerAccountResult decodeDeleteMasterPlayerAccountResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreateTaskResult decodeCreateTaskResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreateSegmentResponse decodeCreateSegmentResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreatePlayerStatisticDefinitionResult decodeCreatePlayerStatisticDefinitionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCreatePlayerSharedSecretResult decodeCreatePlayerSharedSecretResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminCheckLimitedEditionItemAvailabilityResult decodeCheckLimitedEditionItemAvailabilityResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminBlankResult decodeBlankResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminBanUsersResult decodeBanUsersResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminAddPlayerTagResult decodeAddPlayerTagResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminAddNewsResult decodeAddNewsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FAdminAddLocalizedNewsResult decodeAddLocalizedNewsResultResponse(UPlayFabJsonObject* Response);
    
};

