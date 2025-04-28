#include "RivalsMatchmakingSubsystem.h"

URivalsMatchmakingSubsystem::URivalsMatchmakingSubsystem() {
    this->bPollingEdgegapSession = false;
    this->ServerRegionName = TEXT("Undefined");
    this->SeparatorValue = 2;
    this->LastSeparatorUpdateTime = -1.00f;
    this->MatchAcceptDenyModal = NULL;
}

void URivalsMatchmakingSubsystem::UpdateReconnectData() {
}

void URivalsMatchmakingSubsystem::TriggerMatchAcceptDenyModal(const FString& InServerRegion, const FString& InConnectionIpPort, const FString& InMatchId) {
}

void URivalsMatchmakingSubsystem::SetSeparatorValue(const int32& InValue) {
}

void URivalsMatchmakingSubsystem::SetLocationAcceptMatchmaking(const FString& InLocation, const bool bInShouldAcceptMatchmaking) {
}

void URivalsMatchmakingSubsystem::SetLastMatchmadeQueue(const FString& InQueueName) {
}

void URivalsMatchmakingSubsystem::SetConnectionLeniency(const ERivalsConnectionLeniency& InLeniency) {
}

void URivalsMatchmakingSubsystem::RequestPublicIp() {
}

void URivalsMatchmakingSubsystem::ReportServer() {
}

void URivalsMatchmakingSubsystem::QueueForMatchmaking(const TArray<FString>& QueueNames, const TArray<FString>& MembersToMatchWith) {
}

void URivalsMatchmakingSubsystem::ProcessBeaconResponse(const FPingQoSInfo& Result) {
}

void URivalsMatchmakingSubsystem::PollServerConnection(const FString& ConnectionString) {
}

void URivalsMatchmakingSubsystem::PollMatchUserData(const FString& MatchID) {
}

void URivalsMatchmakingSubsystem::PingQosBeacons(bool bShouldPrintPings) {
}

void URivalsMatchmakingSubsystem::OnPingQosBeaconsComplete(const TArray<FPingQoSInfo>& Result) {
}

void URivalsMatchmakingSubsystem::OnPingQosBeaconComplete(const FPingQoSInfo Result) {
}

void URivalsMatchmakingSubsystem::JoinMatchmakingTicket(const FString& InTicketId, const FString& InQueueName) {
}

void URivalsMatchmakingSubsystem::JoinEdgegapSession(const FString& MatchID) {
}

bool URivalsMatchmakingSubsystem::IsUserPublicIpValid() {
    return false;
}

bool URivalsMatchmakingSubsystem::IsRegionAcceptedForMatchmaking(const FString& InRegionName) const {
    return false;
}

bool URivalsMatchmakingSubsystem::IsQueueRanked(const FString& InQueueName) {
    return false;
}

bool URivalsMatchmakingSubsystem::IsQueueLobby(const FString& InQueueName) {
    return false;
}

bool URivalsMatchmakingSubsystem::IsCurrentlyMatchmaking() {
    return false;
}

bool URivalsMatchmakingSubsystem::IsConnectingToServer() {
    return false;
}

void URivalsMatchmakingSubsystem::InitializeReconnectData(const FString& InConnectionString, const FString& InQueueName) {
}

bool URivalsMatchmakingSubsystem::HasValidLocationsSelected() {
    return false;
}

bool URivalsMatchmakingSubsystem::HasActiveMatchmakingTickets() {
    return false;
}

FString URivalsMatchmakingSubsystem::GetUserPublicIp() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetSinglesQueue() {
    return TEXT("");
}

int32 URivalsMatchmakingSubsystem::GetSeparatorValue() {
    return 0;
}

FRivalsRegionMappingTitleData URivalsMatchmakingSubsystem::GetRegionMappingTitleData() {
    return FRivalsRegionMappingTitleData{};
}

FString URivalsMatchmakingSubsystem::GetRankedQueue() {
    return TEXT("");
}

FRivalsLocationConnectionInfo URivalsMatchmakingSubsystem::GetLocationConnectionInfoForRegion(const FString& InRegionName) const {
    return FRivalsLocationConnectionInfo{};
}

FString URivalsMatchmakingSubsystem::GetLobbyEOSQueue() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetLobby4pQueue() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetLobby3pQueue() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetLobby2pQueue() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetLastMatchmadeQueue() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetFFAQueue() {
    return TEXT("");
}

void URivalsMatchmakingSubsystem::GetEdgegapSessionInfo(const FString& SessionId) {
}

void URivalsMatchmakingSubsystem::GetEdgegapLocations(int32 InPage) {
}

FRivalsEdgegapLocationInfo URivalsMatchmakingSubsystem::GetEdgegapLocationInfoByCityName(const FString& InCityName) {
    return FRivalsEdgegapLocationInfo{};
}

void URivalsMatchmakingSubsystem::GetEdgegapLocationBeacons() {
}

FString URivalsMatchmakingSubsystem::GetDoublesQueue() {
    return TEXT("");
}

ERivalsConnectionLeniency URivalsMatchmakingSubsystem::GetConnectionLeniency() {
    return ERivalsConnectionLeniency::Limited;
}

void URivalsMatchmakingSubsystem::GetAllEdgegapLocations() {
}

URivalsMatchmakingSubsystem* URivalsMatchmakingSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void URivalsMatchmakingSubsystem::ForceStopConnectionLoop() {
}

void URivalsMatchmakingSubsystem::DenyMatch() {
}

void URivalsMatchmakingSubsystem::DebugJoinServer(const FString& IP, const FString& Port) {
}

bool URivalsMatchmakingSubsystem::CouldAttemptReconnection() {
    return false;
}

void URivalsMatchmakingSubsystem::ConnectToServer(const FString& ConnectionString) {
}

void URivalsMatchmakingSubsystem::CloseMatchAcceptDenyModal() {
}

void URivalsMatchmakingSubsystem::ClearReconnectData(bool bIsReconnectingInValue) {
}

void URivalsMatchmakingSubsystem::ClearMatchUserData(const FString& MatchID) {
}

void URivalsMatchmakingSubsystem::CheckQosPings(bool bShouldForceUpdate) {
}

void URivalsMatchmakingSubsystem::CheckAllMatchmakingTickets() {
}

void URivalsMatchmakingSubsystem::CancelAllMatchmakingTickets(const bool bIsMatchFound) {
}

void URivalsMatchmakingSubsystem::AttemptReconnect() {
}

void URivalsMatchmakingSubsystem::AcceptMatch(const FString& InServerRegion, const FString& InConnectionIpPort, const FString& InMatchId) {
}


