#include "SnapNetClient.h"
#include "Templates/SubclassOf.h"

USnapNetClient::USnapNetClient() {
    this->HistoryTimeAccumulator = 0.00f;
    this->Input = NULL;
    this->LocalPlayerJoinRequested = false;
    this->PacketCodec = NULL;
    this->ProtocolId = 0;
    this->Simulation = NULL;
    this->Transport = NULL;
}

void USnapNetClient::SetTransportClass(TSubclassOf<USnapNetTransport> transportClass) {
}

void USnapNetClient::SetSpectatingLagCompensationEnabled(bool Enabled) {
}

void USnapNetClient::SetSpectatedPlayerIndexForReplay(int32 PlayerIndex) {
}

void USnapNetClient::SetReplayLagCompensation(bool Enabled) {
}

void USnapNetClient::SetRenderInterpolationMethod(ESnapNetRenderInterpolationMethod RenderInterpolationMethod) {
}

void USnapNetClient::SetPredictedMaxMilliseconds(int32 Milliseconds) {
}

void USnapNetClient::SetPacketSimulationLoss(float Percentage) {
}

void USnapNetClient::SetPacketSimulationLatency(int32 Milliseconds) {
}

void USnapNetClient::SetPacketSimulationJitter(int32 Milliseconds) {
}

void USnapNetClient::SetPacketCodecClass(TSubclassOf<USnapNetPacketCodec> PacketCodecClass) {
}

void USnapNetClient::SetInputDelayBeforePredictionMinMilliseconds(int32 Milliseconds) {
}

void USnapNetClient::SetInputDelayBeforePredictionMaxMilliseconds(int32 Milliseconds) {
}

void USnapNetClient::SetAdditionalJitterBufferMilliseconds(int32 Milliseconds) {
}

void USnapNetClient::SendReliableMessage(int32 LocalPlayerIndex, USnapNetReliableMessage* Message) {
}

void USnapNetClient::SeekReplay(int32 Time) {
}

bool USnapNetClient::PlayReplayFile(const FString& Filename, int32& StartTime, int32& EndTime) {
    return false;
}

bool USnapNetClient::IsSpectatingLagCompensationEnabled() const {
    return false;
}

bool USnapNetClient::IsReplayLagCompensationEnabled() const {
    return false;
}

bool USnapNetClient::IsPlayingReplay() const {
    return false;
}

bool USnapNetClient::IsPlayingInstantReplay() const {
    return false;
}

bool USnapNetClient::IsPlayerIndexSpectatedLocally(int32 PlayerIndex) const {
    return false;
}

bool USnapNetClient::IsPlayerIndexLocal(int32 PlayerIndex) const {
    return false;
}

bool USnapNetClient::IsNetworkSimulationEnabled() const {
    return false;
}

bool USnapNetClient::IsLoopback() const {
    return false;
}

bool USnapNetClient::IsConnectionInterrupted() const {
    return false;
}

USnapNetTransport* USnapNetClient::GetTransport() const {
    return NULL;
}

int32 USnapNetClient::GetSpectatedPlayerIndexForReplay() const {
    return 0;
}

int32 USnapNetClient::GetSpectatedPlayerIndex(int32 LocalPlayerIndex) const {
    return 0;
}

float USnapNetClient::GetSimulationTimeScale() const {
    return 0.0f;
}

USnapNetSimulation* USnapNetClient::GetSimulation() const {
    return NULL;
}

int32 USnapNetClient::GetPredictedMaxMilliseconds() const {
    return 0;
}

int32 USnapNetClient::GetPredictedFrames() const {
    return 0;
}

int32 USnapNetClient::GetPlayerIndex(int32 LocalPlayerIndex) const {
    return 0;
}

APlayerController* USnapNetClient::GetPlayerControllerForPlayerIndex(int32 PlayerIndex) const {
    return NULL;
}

float USnapNetClient::GetPacketLossFraction() const {
    return 0.0f;
}

float USnapNetClient::GetPacketLatencySeconds() const {
    return 0.0f;
}

float USnapNetClient::GetPacketJitterSeconds() const {
    return 0.0f;
}

USnapNetPacketCodec* USnapNetClient::GetPacketCodec() const {
    return NULL;
}

int32 USnapNetClient::GetLocalPlayerIndexForPlayerIndex(int32 PlayerIndex) const {
    return 0;
}

int32 USnapNetClient::GetLocalPlayerIndexForLocalPlayer(ULocalPlayer* LocalPlayer) const {
    return 0;
}

float USnapNetClient::GetKbpsSent() const {
    return 0.0f;
}

float USnapNetClient::GetKbpsReceived() const {
    return 0.0f;
}

float USnapNetClient::GetJitterBufferSeconds() const {
    return 0.0f;
}

int32 USnapNetClient::GetInstantReplaySlotIndex() const {
    return 0;
}

int32 USnapNetClient::GetInstantReplayContextEntityIndex() const {
    return 0;
}

int32 USnapNetClient::GetInputDelayFrames() const {
    return 0;
}

int32 USnapNetClient::GetInputDelayBeforePredictionMinMilliseconds() const {
    return 0;
}

int32 USnapNetClient::GetInputDelayBeforePredictionMaxMilliseconds() const {
    return 0;
}

ESnapNetClientConnectionStatus USnapNetClient::GetConnectionStatus() const {
    return ESnapNetClientConnectionStatus::Disconnected;
}

int32 USnapNetClient::GetBufferedRemoteInputs() const {
    return 0;
}

int32 USnapNetClient::GetAdditionalJitterBufferMilliseconds() const {
    return 0;
}

USnapNetClient* USnapNetClient::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool USnapNetClient::DoesCurrentSceneMatchSimulation() const {
    return false;
}

void USnapNetClient::Disconnect() {
}


