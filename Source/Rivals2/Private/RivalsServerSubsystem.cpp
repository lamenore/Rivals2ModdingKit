#include "RivalsServerSubsystem.h"

URivalsServerSubsystem::URivalsServerSubsystem() {
    this->ServerState = ERivalsServerState::None;
}

void URivalsServerSubsystem::UnregisterConnectedPlayer(const FString& PlayerPlayFabTitleId) {
}

void URivalsServerSubsystem::ReportServerForPlayer(ARivalsPlayerEntity* PlayerEntity) {
}

void URivalsServerSubsystem::RegisterConnectedPlayer(const FString& PlayerPlayFabTitleId) {
}

void URivalsServerSubsystem::ProcessServerReports() {
}

ERivalsServerState URivalsServerSubsystem::GetServerState() {
    return ERivalsServerState::None;
}

TArray<FString> URivalsServerSubsystem::GetRegisteredConnectedPlayerIds() {
    return TArray<FString>();
}

int32 URivalsServerSubsystem::GetRegisteredConnectedPlayerCount() {
    return 0;
}

int32 URivalsServerSubsystem::GetConnectedPlayerCount() {
    return 0;
}

void URivalsServerSubsystem::ChangeState(const ERivalsServerState NewState) {
}


