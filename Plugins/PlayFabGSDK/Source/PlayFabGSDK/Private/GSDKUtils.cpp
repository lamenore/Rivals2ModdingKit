#include "GSDKUtils.h"

UGSDKUtils::UGSDKUtils() {
}

void UGSDKUtils::UpdateConnectedPlayers(const TArray<FConnectedPlayer>& CurrentlyConnectedPlayers) {
}

bool UGSDKUtils::SetDefaultServerHostPort() {
    return false;
}

void UGSDKUtils::RegisterGSDKShutdownDelegate(const FOnGSDKShutdown_Dyn& OnGSDKShutdownDelegate) {
}

void UGSDKUtils::RegisterGSDKServerActiveDelegate(const FOnGSDKServerActive_Dyn& OnGSDKServerActiveDelegate) {
}

void UGSDKUtils::RegisterGSDKReadyForPlayers(const FOnGSDKReadyForPlayers_Dyn& OnGSDKReadyForPlayersDelegate) {
}

void UGSDKUtils::RegisterGSDKMaintenanceDelegate(const FOnGSDKMaintenance_Dyn& OnGSDKMaintenanceDelegate) {
}

void UGSDKUtils::RegisterGSDKHealthCheckDelegate(const FOnGSDKHealthCheck_Dyn& OnGSDKHealthCheckDelegate) {
}

void UGSDKUtils::ReadyForPlayers() {
}

FString UGSDKUtils::GetVMId() {
    return TEXT("");
}

FString UGSDKUtils::GetTitleId() {
    return TEXT("");
}

FString UGSDKUtils::GetSharedContentDirectory() {
    return TEXT("");
}

FString UGSDKUtils::GetServerId() {
    return TEXT("");
}

FString UGSDKUtils::GetRegionName() {
    return TEXT("");
}

FString UGSDKUtils::GetMetaDataValue(const FString& MetaDataName) {
    return TEXT("");
}

FString UGSDKUtils::GetMatchSessionCookie() {
    return TEXT("");
}

FString UGSDKUtils::GetMatchId() {
    return TEXT("");
}

FString UGSDKUtils::GetLogsDirectory() {
    return TEXT("");
}

TArray<FString> UGSDKUtils::GetInitialPlayers() {
    return TArray<FString>();
}

FGameServerConnectionInfo UGSDKUtils::GetGameServerConnectionInfo() {
    return FGameServerConnectionInfo{};
}

FString UGSDKUtils::GetBuildId() {
    return TEXT("");
}


