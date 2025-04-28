#include "RivalsLobbySubsystem.h"

URivalsLobbySubsystem::URivalsLobbySubsystem() {
    this->bIsSpectatorLobby = false;
}

void URivalsLobbySubsystem::ToggleSpectatorLobby(const bool bInIsSpecatatorLobby) {
}

void URivalsLobbySubsystem::SetRegionOverride(const FString& InRegionOverride) {
}

void URivalsLobbySubsystem::QueueWithLobby() {
}

void URivalsLobbySubsystem::QueueLobbyForDoubles() {
}

void URivalsLobbySubsystem::OssLogSessionInfo() {
}

void URivalsLobbySubsystem::Oss_UpdateSessionWithRegionOverride(const FString& InRegionOverride) {
}

bool URivalsLobbySubsystem::Oss_ShowNativeOssInviteUI() {
    return false;
}

void URivalsLobbySubsystem::Oss_SearchSessions(const FString& searchKeyword) {
}

void URivalsLobbySubsystem::Oss_LeaveSession() {
}

void URivalsLobbySubsystem::Oss_JoinSession(int32 searchResultIndex) {
}

bool URivalsLobbySubsystem::Oss_IsHosting() {
    return false;
}

FString URivalsLobbySubsystem::Oss_GetStringLobbyProperty(FName stringLobbyPropertyKey) {
    return TEXT("");
}

TArray<FString> URivalsLobbySubsystem::Oss_GetRegisteredPlayersIds() {
    return TArray<FString>();
}

TArray<FString> URivalsLobbySubsystem::Oss_GetRegisteredPlayersIconFriendlyIds() {
    return TArray<FString>();
}

TArray<FString> URivalsLobbySubsystem::Oss_GetRegisteredPlayersDisplayNames() {
    return TArray<FString>();
}

int32 URivalsLobbySubsystem::Oss_GetRegisteredPlayersCount() {
    return 0;
}

bool URivalsLobbySubsystem::Oss_GetIsProcessing() const {
    return false;
}

void URivalsLobbySubsystem::Oss_CreateSession(int32 Size, bool bUseSearchKeyword, TEnumAsByte<RivalsLobbyType> RivalsLobbyType) {
}

void URivalsLobbySubsystem::JoinAcceptedInviteSession() {
}

bool URivalsLobbySubsystem::HasAcceptedLobbyInvitationBeforeBoot() const {
    return false;
}

TEnumAsByte<RivalsLobbyType> URivalsLobbySubsystem::GetRivalsLobbyType() {
    return RivalsLobbyType_MIN;
}

FString URivalsLobbySubsystem::GetRegionOverride() {
    return TEXT("");
}

TEnumAsByte<ERivalsPlayFabLobbyAccessPolicy> URivalsLobbySubsystem::GetLobbyAccessPolicy() {
    return Public;
}

bool URivalsLobbySubsystem::GetIsInitialized() const {
    return false;
}

URivalsLobbySubsystem* URivalsLobbySubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}


