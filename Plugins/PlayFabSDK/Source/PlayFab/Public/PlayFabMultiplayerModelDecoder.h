#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MultiplayerBuildAliasDetailsResponse.h"
#include "MultiplayerCancelAllMatchmakingTicketsForPlayerResult.h"
#include "MultiplayerCancelAllServerBackfillTicketsForPlayerResult.h"
#include "MultiplayerCancelMatchmakingTicketResult.h"
#include "MultiplayerCancelServerBackfillTicketResult.h"
#include "MultiplayerCreateBuildWithCustomContainerResponse.h"
#include "MultiplayerCreateBuildWithManagedContainerResponse.h"
#include "MultiplayerCreateBuildWithProcessBasedServerResponse.h"
#include "MultiplayerCreateLobbyResult.h"
#include "MultiplayerCreateMatchmakingTicketResult.h"
#include "MultiplayerCreateRemoteUserResponse.h"
#include "MultiplayerCreateServerBackfillTicketResult.h"
#include "MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h"
#include "MultiplayerEmptyResponse.h"
#include "MultiplayerEnableMultiplayerServersForTitleResponse.h"
#include "MultiplayerFindFriendLobbiesResult.h"
#include "MultiplayerFindLobbiesResult.h"
#include "MultiplayerGetAssetDownloadUrlResponse.h"
#include "MultiplayerGetAssetUploadUrlResponse.h"
#include "MultiplayerGetBuildResponse.h"
#include "MultiplayerGetContainerRegistryCredentialsResponse.h"
#include "MultiplayerGetLobbyResult.h"
#include "MultiplayerGetMatchResult.h"
#include "MultiplayerGetMatchmakingTicketResult.h"
#include "MultiplayerGetMultiplayerServerDetailsResponse.h"
#include "MultiplayerGetMultiplayerServerLogsResponse.h"
#include "MultiplayerGetQueueStatisticsResult.h"
#include "MultiplayerGetRemoteLoginEndpointResponse.h"
#include "MultiplayerGetServerBackfillTicketResult.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.h"
#include "MultiplayerGetTitleMultiplayerServersQuotaChangeResponse.h"
#include "MultiplayerGetTitleMultiplayerServersQuotasResponse.h"
#include "MultiplayerJoinLobbyAsServerResult.h"
#include "MultiplayerJoinLobbyResult.h"
#include "MultiplayerJoinMatchmakingTicketResult.h"
#include "MultiplayerListAssetSummariesResponse.h"
#include "MultiplayerListBuildAliasesResponse.h"
#include "MultiplayerListBuildSummariesResponse.h"
#include "MultiplayerListCertificateSummariesResponse.h"
#include "MultiplayerListContainerImageTagsResponse.h"
#include "MultiplayerListContainerImagesResponse.h"
#include "MultiplayerListMatchmakingTicketsForPlayerResult.h"
#include "MultiplayerListMultiplayerServersResponse.h"
#include "MultiplayerListPartyQosServersResponse.h"
#include "MultiplayerListQosServersForTitleResponse.h"
#include "MultiplayerListSecretSummariesResponse.h"
#include "MultiplayerListServerBackfillTicketsForPlayerResult.h"
#include "MultiplayerListTitleMultiplayerServersQuotaChangesResponse.h"
#include "MultiplayerListVirtualMachineSummariesResponse.h"
#include "MultiplayerLobbyEmptyResult.h"
#include "MultiplayerRequestMultiplayerServerResponse.h"
#include "MultiplayerRequestPartyServiceResponse.h"
#include "MultiplayerRolloverContainerRegistryCredentialsResponse.h"
#include "MultiplayerSubscribeToLobbyResourceResult.h"
#include "PlayFabMultiplayerModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabMultiplayerModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FMultiplayerSubscribeToLobbyResourceResult decodeSubscribeToLobbyResourceResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerRolloverContainerRegistryCredentialsResponse decodeRolloverContainerRegistryCredentialsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerRequestPartyServiceResponse decodeRequestPartyServiceResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerRequestMultiplayerServerResponse decodeRequestMultiplayerServerResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerLobbyEmptyResult decodeLobbyEmptyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListVirtualMachineSummariesResponse decodeListVirtualMachineSummariesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListTitleMultiplayerServersQuotaChangesResponse decodeListTitleMultiplayerServersQuotaChangesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListServerBackfillTicketsForPlayerResult decodeListServerBackfillTicketsForPlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListSecretSummariesResponse decodeListSecretSummariesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListQosServersForTitleResponse decodeListQosServersForTitleResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListPartyQosServersResponse decodeListPartyQosServersResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListMultiplayerServersResponse decodeListMultiplayerServersResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListMatchmakingTicketsForPlayerResult decodeListMatchmakingTicketsForPlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListContainerImageTagsResponse decodeListContainerImageTagsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListContainerImagesResponse decodeListContainerImagesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListCertificateSummariesResponse decodeListCertificateSummariesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListBuildSummariesResponse decodeListBuildSummariesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListBuildAliasesResponse decodeListBuildAliasesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerListAssetSummariesResponse decodeListAssetSummariesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerJoinMatchmakingTicketResult decodeJoinMatchmakingTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerJoinLobbyResult decodeJoinLobbyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerJoinLobbyAsServerResult decodeJoinLobbyAsServerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetTitleMultiplayerServersQuotasResponse decodeGetTitleMultiplayerServersQuotasResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse decodeGetTitleMultiplayerServersQuotaChangeResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetServerBackfillTicketResult decodeGetServerBackfillTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetRemoteLoginEndpointResponse decodeGetRemoteLoginEndpointResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetQueueStatisticsResult decodeGetQueueStatisticsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMultiplayerServerLogsResponse decodeGetMultiplayerServerLogsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMultiplayerServerDetailsResponse decodeGetMultiplayerServerDetailsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMatchResult decodeGetMatchResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetMatchmakingTicketResult decodeGetMatchmakingTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetLobbyResult decodeGetLobbyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetContainerRegistryCredentialsResponse decodeGetContainerRegistryCredentialsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetBuildResponse decodeGetBuildResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetAssetUploadUrlResponse decodeGetAssetUploadUrlResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerGetAssetDownloadUrlResponse decodeGetAssetDownloadUrlResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerFindLobbiesResult decodeFindLobbiesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerFindFriendLobbiesResult decodeFindFriendLobbiesResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerEnableMultiplayerServersForTitleResponse decodeEnableMultiplayerServersForTitleResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse decodeCreateTitleMultiplayerServersQuotaChangeResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateServerBackfillTicketResult decodeCreateServerBackfillTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateRemoteUserResponse decodeCreateRemoteUserResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateMatchmakingTicketResult decodeCreateMatchmakingTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateLobbyResult decodeCreateLobbyResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateBuildWithProcessBasedServerResponse decodeCreateBuildWithProcessBasedServerResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateBuildWithManagedContainerResponse decodeCreateBuildWithManagedContainerResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCreateBuildWithCustomContainerResponse decodeCreateBuildWithCustomContainerResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelServerBackfillTicketResult decodeCancelServerBackfillTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelMatchmakingTicketResult decodeCancelMatchmakingTicketResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelAllServerBackfillTicketsForPlayerResult decodeCancelAllServerBackfillTicketsForPlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerCancelAllMatchmakingTicketsForPlayerResult decodeCancelAllMatchmakingTicketsForPlayerResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FMultiplayerBuildAliasDetailsResponse decodeBuildAliasDetailsResponseResponse(UPlayFabJsonObject* Response);
    
};

