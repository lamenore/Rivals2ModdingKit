#include "RivalsMatchmakingSubsystem.h"

URivalsMatchmakingSubsystem::URivalsMatchmakingSubsystem() {
    this->bPollingEdgegapSession = false;
    this->ServerRegionName = TEXT("Undefined");
}

void URivalsMatchmakingSubsystem::UpdateReconnectData() {
}

void URivalsMatchmakingSubsystem::SetRegionAcceptMatchmaking(const FString& InRegion, const bool bInShouldAcceptMatchmaking) {
}

void URivalsMatchmakingSubsystem::SetLastMatchmadeQueue(const FString& InQueueName) {
}

void URivalsMatchmakingSubsystem::SetConnectionLeniency(const ERivalsConnectionLeniency& InLeniency) {
}

void URivalsMatchmakingSubsystem::RequestPublicIp() {
}

void URivalsMatchmakingSubsystem::QueueForMatchmaking(const TArray<FString>& QueueNames, const TArray<FString>& MembersToMatchWith) {
}

void URivalsMatchmakingSubsystem::PollServerConnection(const FString& ConnectionString) {
}

void URivalsMatchmakingSubsystem::PollMatchUserData(const FString& MatchID) {
}

void URivalsMatchmakingSubsystem::PingQosBeacons(bool bShouldPrintPings) {
}

void URivalsMatchmakingSubsystem::OnPingQosBeaconsComplete(const TArray<FPingQoSInfo>& Result) {
}

void URivalsMatchmakingSubsystem::JoinMatchmakingTicket(const FString& InTicketId, const FString& InQueueName) {
}

void URivalsMatchmakingSubsystem::JoinEdgegapSession(const FString& MatchID) {
}

bool URivalsMatchmakingSubsystem::IsUserPublicIpValid() {
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

bool URivalsMatchmakingSubsystem::HasValidRegionsSelected() {
    return false;
}

FString URivalsMatchmakingSubsystem::GetUserPublicIp() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetSinglesQueue() {
    return TEXT("");
}

FString URivalsMatchmakingSubsystem::GetRankedQueue() {
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

void URivalsMatchmakingSubsystem::DebugJoinServer(const FString& IP, const FString& Port) {
}

bool URivalsMatchmakingSubsystem::CouldAttemptReconnection() {
    return false;
}

void URivalsMatchmakingSubsystem::ConnectToServer(const FString& ConnectionString) {
}

void URivalsMatchmakingSubsystem::ClearReconnectData() {
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


