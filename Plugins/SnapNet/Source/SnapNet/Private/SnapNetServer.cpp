#include "SnapNetServer.h"
#include "Templates/SubclassOf.h"

USnapNetServer::USnapNetServer() {
    this->PacketCodec = NULL;
    this->ProtocolId = 0;
    this->bRewinding = false;
    this->ServerScript = NULL;
    this->Simulation = NULL;
    this->Transport = NULL;
}

void USnapNetServer::StopServer() {
}

void USnapNetServer::StopReplayRecording() {
}

void USnapNetServer::StopPacketCapture() {
}

void USnapNetServer::StopInstantReplay(int32 ClientIndex) {
}

void USnapNetServer::StartServer(TSubclassOf<USnapNetServerScript> ServerScriptClass) {
}

void USnapNetServer::StartSavedInstantReplay(int32 SlotIndex, int32 ClientIndex, int32 spectatedPlayerIndex, int32 contextEntityIndex) {
}

void USnapNetServer::StartReplayRecording() {
}

void USnapNetServer::StartPacketCapture() {
}

void USnapNetServer::StartInstantReplay(int32 ClientIndex, int32 spectatedPlayerIndex, int32 contextEntityIndex, int32 StartTime, int32 EndTime) {
}

void USnapNetServer::SetTransportClass(TSubclassOf<USnapNetTransport> transportClass) {
}

void USnapNetServer::SetSpectatedPlayerIndex(int32 PlayerIndex, int32 spectatedPlayerIndex) {
}

void USnapNetServer::SetPacketCodecClass(TSubclassOf<USnapNetPacketCodec> PacketCodecClass) {
}

void USnapNetServer::SendReliableMessage(int32 PlayerIndex, USnapNetReliableMessage* Message) {
}

void USnapNetServer::SendEntityToPlayer(int32 EntityIndex, int32 PlayerIndex, bool send) {
}

void USnapNetServer::SendEntityToNoPlayers(int32 EntityIndex) {
}

void USnapNetServer::SendEntityToAllPlayers(int32 EntityIndex) {
}

void USnapNetServer::SaveReplayFile(const FString& Filename) {
}

void USnapNetServer::SaveInstantReplay(int32 SlotIndex, int32 StartTime, int32 EndTime) {
}

void USnapNetServer::RemovePlayer(int32 PlayerIndex) {
}

int32 USnapNetServer::RegisterString(FName StringPoolName, const FString& Value) {
    return 0;
}

bool USnapNetServer::IsRunning() const {
    return false;
}

bool USnapNetServer::IsRewinding() const {
    return false;
}

bool USnapNetServer::IsPlayingInstantReplay(int32 ClientIndex) const {
    return false;
}

bool USnapNetServer::IsEntitySentToPlayer(int32 EntityIndex, int32 PlayerIndex) const {
    return false;
}

bool USnapNetServer::IsEntityPredictedForPlayer(int32 EntityIndex, int32 PlayerIndex) const {
    return false;
}

bool USnapNetServer::IsClientConnected(int32 ClientIndex) const {
    return false;
}

bool USnapNetServer::IsBot(int32 PlayerIndex) const {
    return false;
}

USnapNetTransport* USnapNetServer::GetTransport() const {
    return NULL;
}

int32 USnapNetServer::GetTimeMilliseconds() const {
    return 0;
}

int32 USnapNetServer::GetSpectatedPlayerIndex(int32 PlayerIndex) const {
    return 0;
}

USnapNetSimulation* USnapNetServer::GetSimulation() const {
    return NULL;
}

USnapNetServerScript* USnapNetServer::GetServerScript() const {
    return NULL;
}

int32 USnapNetServer::GetPlayerInterpolationTimeMilliseconds(int32 PlayerIndex) const {
    return 0;
}

int32 USnapNetServer::GetPlayerIndex(int32 ClientIndex, int32 LocalPlayerIndex) const {
    return 0;
}

float USnapNetServer::GetPacketLatencySeconds(int32 ClientIndex) const {
    return 0.0f;
}

USnapNetPacketCodec* USnapNetServer::GetPacketCodec() const {
    return NULL;
}

int32 USnapNetServer::GetClientIndex(int32 PlayerIndex) const {
    return 0;
}

USnapNetServer* USnapNetServer::Get(const UObject* WorldContextObject) {
    return NULL;
}

void USnapNetServer::ForceNewBaseline() {
}

bool USnapNetServer::DoesEntityRequireOwnerInput(int32 EntityIndex) const {
    return false;
}


